/*
   Copyright (C) 2011  Statoil ASA, Norway. 
    
   The file 'grid_info.c' is part of ERT - Ensemble based Reservoir Tool. 
    
   ERT is free software: you can redistribute it and/or modify 
   it under the terms of the GNU General Public License as published by 
   the Free Software Foundation, either version 3 of the License, or 
   (at your option) any later version. 
    
   ERT is distributed in the hope that it will be useful, but WITHOUT ANY 
   WARRANTY; without even the implied warranty of MERCHANTABILITY or 
   FITNESS FOR A PARTICULAR PURPOSE.   
    
   See the GNU General Public License at <http://www.gnu.org/licenses/gpl.html> 
   for more details. 
*/

#include <ecl_grid.h>
#include <stdlib.h>
#include <stdio.h>



int main(int argc, char ** argv) {
  if (argc < 2) {
    fprintf(stderr,"%s: filename \n",argv[0]);
    util_abort("%s: incorrect usage \n",__func__);
    exit(1);
  }
  {
    ecl_grid_type * ecl_grid;
    const char    * grid_file = argv[1];
    
    
    ecl_grid = ecl_grid_alloc(grid_file );
    ecl_grid_summarize( ecl_grid );
    if (argc >= 3) {
      ecl_grid_type * grid2 = ecl_grid_alloc( argv[2] );
      
      if (ecl_grid_compare( ecl_grid , grid2))
        printf("\nThe grids %s %s are IDENTICAL.\n" , argv[1] , argv[2]);
      else {
        printf("\n");
        ecl_grid_summarize( grid2 );
        printf("\nThe grids %s %s are DIFFERENT.\n", argv[1] , argv[2]);
      }
      
      ecl_grid_free( grid2 );
    }
    ecl_grid_free(ecl_grid);
  }
}
