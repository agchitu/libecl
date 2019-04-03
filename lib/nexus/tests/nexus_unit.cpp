
#include <iostream>

#include <ert/util/test_util.hpp>

#include <nexus/unit.hpp>


void test_metric_bars_units() {
    const nex::UnitSystem u( nex::UnitSystem::UnitType::metric_bars );

    auto compressibility             = u.unit_str(nex::UnitSystem::Measure::compressibility);
    auto density                     = u.unit_str(nex::UnitSystem::Measure::density);
    auto formation_volume_factor_gas = u.unit_str(nex::UnitSystem::Measure::formation_volume_factor_gas);
    auto formation_volume_factor_oil = u.unit_str(nex::UnitSystem::Measure::formation_volume_factor_oil);
    auto fraction                    = u.unit_str(nex::UnitSystem::Measure::fraction);
    auto gas_liquid_ratio            = u.unit_str(nex::UnitSystem::Measure::gas_liquid_ratio);
    auto length                      = u.unit_str(nex::UnitSystem::Measure::length);
    auto moles                       = u.unit_str(nex::UnitSystem::Measure::moles);
    auto permeability                = u.unit_str(nex::UnitSystem::Measure::permeability);
    auto pressure                    = u.unit_str(nex::UnitSystem::Measure::pressure);
    auto pressure_absolute           = u.unit_str(nex::UnitSystem::Measure::pressure_absolute);
    auto reservoir_rates             = u.unit_str(nex::UnitSystem::Measure::reservoir_rates);
    auto reservoir_volumes           = u.unit_str(nex::UnitSystem::Measure::reservoir_volumes);
    auto surface_rates_gas           = u.unit_str(nex::UnitSystem::Measure::surface_rates_gas);
    auto surface_rates_liquid        = u.unit_str(nex::UnitSystem::Measure::surface_rates_liquid);
    auto surface_volumes_gas         = u.unit_str(nex::UnitSystem::Measure::surface_volumes_gas);
    auto surface_volumes_liquid      = u.unit_str(nex::UnitSystem::Measure::surface_volumes_liquid);
    auto temperature                 = u.unit_str(nex::UnitSystem::Measure::temperature);
    auto time                        = u.unit_str(nex::UnitSystem::Measure::time);
    auto viscosity                   = u.unit_str(nex::UnitSystem::Measure::viscosity);
    auto volume                      = u.unit_str(nex::UnitSystem::Measure::volume);
    auto water_cut                   = u.unit_str(nex::UnitSystem::Measure::water_cut);

    test_assert_string_equal( compressibility.c_str(),             "BARS-1");
    test_assert_string_equal( density.c_str(),                     "KG/M3");
    test_assert_string_equal( formation_volume_factor_gas.c_str(), "RM3/SM3");
    test_assert_string_equal( formation_volume_factor_oil.c_str(), "RM3/SM3");
    test_assert_string_equal( fraction.c_str(),                    "");
    test_assert_string_equal( gas_liquid_ratio.c_str(),            "SM3/SM3");
    test_assert_string_equal( length.c_str(),                      "M");
    test_assert_string_equal( moles.c_str(),                       "KG-M");
    test_assert_string_equal( permeability.c_str(),                "MD");
    test_assert_string_equal( pressure.c_str(),                    "BARS");
    test_assert_string_equal( pressure_absolute.c_str(),           "BARSA");
    test_assert_string_equal( reservoir_rates.c_str(),             "RM3/DAY");
    test_assert_string_equal( reservoir_volumes.c_str(),           "kRM3");
    test_assert_string_equal( surface_rates_gas.c_str(),           "SM3/DAY");
    test_assert_string_equal( surface_rates_liquid.c_str(),        "SM3/DAY");
    test_assert_string_equal( surface_volumes_gas.c_str(),         "kSM3");
    test_assert_string_equal( surface_volumes_liquid.c_str(),      "kSM3");
    test_assert_string_equal( temperature.c_str(),                 "C");
    test_assert_string_equal( time.c_str(),                        "DAY");
    test_assert_string_equal( viscosity.c_str(),                   "CP");
    test_assert_string_equal( volume.c_str(),                      "M3");
    test_assert_string_equal( water_cut.c_str(),                   "SM3/SM3");
}


int main(int argc, char **argv) {
    test_metric_bars_units();
    exit(0);
}
