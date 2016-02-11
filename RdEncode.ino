#define DXL_BUS_SERIAL1 1
#define DXL_BUS_SERIAL2 2
#define DXL_BUS_SERIAL3 3
#define Joint_ID 1
#define PRESENT_POS 54

Dynamixel Dxl(DXL_BUS_SERIAL1);

Void setup() {
  Dxl.begin(3);
  Dxl.maxTorque(Joint_ID,1);
}

void loop() {
  int pos;
  delay(20);
  pos = Dxl.readWord(Joint_ID, PRESENT_POS);
  SerialUSB.print("Here is is, at :");
  SerialUSB.println(pos);  
}

