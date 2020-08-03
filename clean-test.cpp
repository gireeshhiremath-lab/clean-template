#include "vehicle-collector.hpp"
#include <gtest/gtest.h>
 TEST(COLLECT, when_vehicle_report_a_measurement_it_is_featched_and_stored_with_vehicle_id)
 {
  telematics vehi_tele = {121, motor_temp, 25};
  inventory vehi_invt = telematic_to_inventory(vehi_tele);
  ASSERT_EQ(vehi_invt.motor_temp, 25);
 }
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
