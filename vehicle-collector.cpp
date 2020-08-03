#include "vehicle-collector.hpp"

inventory telematic_to_inventory(telematics vehi_tele)
{
  inventory vehi_invt;
  
  vehi_invt.vehicle_id = vehi_tele.vehicle_id ; 
  switch(vehi_tele.type)
  {
    case motor_temp:
                    vehi_invt.motor_temp = vehi_tele.measurement;
                    break;
    case battery_pc:
                    vehi_invt.battery_pc = vehi_tele.measurement;
                    break;
    case battery_temp:
                    vehi_invt.battery_temp = vehi_tele.measurement;
                    break;
  }
  return vehi_invt; 
}
