#include <vehicle-collector.hpp>
#include <gtest/gtest.h>
 TEST(COLLECT,when_vehicle_report_a_measurement_it_is_featched_and_stored_with_vehicle_id)
 {
  inventory i = telematic_to_inventory(telematics);
  ASSERT_EQ(i,30);
 }
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
