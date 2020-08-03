enum measure
{
  motor_temp,
  battery_pc,
  battery_temp,
};

typedef struct 
{
  int vehicle_id;
  measure type;
  float measurement;
}telematics;

typedef struct  
{
  int vehicle_id;
  float motor_temp;
  float battery_pc;
  float battery_temp;
}inventory;

inventory telematic_to_inventory(telematics vehi_tele);
