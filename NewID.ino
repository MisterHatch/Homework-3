#define DXL_BUS_SERIAL1 1
#define DXL_BUS_SERIAL2 2
#define DXL_BUS_SERIAL3 3
#define NewID 10

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup() {
  Dxl.begin(3);
  Dxl.setID(BROADCAST_ID, NewID);
  Dxl.jointMode(NewID);
}

void loop() {
  //Test Servo Responds to new ID
  Dxl.goalPosition(NewID,0);
  delay(1000);
  Dxl.goalPosition(NewID,300);
  delay(1000);
}

