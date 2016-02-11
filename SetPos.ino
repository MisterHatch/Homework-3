#define DXL_BUS_SERIAL1 1
#define DXL_BUS_SERIAL2 2
#define DXL_BUS_SERIAL3 3
#define Joint_ID 0xFE

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup(){
  Dxl.begin(3);
  Dxl.jointMode(Joint_ID); 
}

void loop(){
  Dxl.goalPosition(Joint_ID,0);
  delay(1000);
  Dxl.goalPosition(Joint_ID,300);
  delay(1000);
 // Dxl.goalPosition(Joint_ID,400);
 // delay(400);
 // Dxl.goalPosition(Joint_ID,100);
 // delay(1000); 
}
