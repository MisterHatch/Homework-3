#define DXL_BUS_SERIAL1 1
#define DXL_BUS_SERIAL2 2
#define DXL_BUS_SERIAL3 3
#define Serv1 30
#define Serv2 10

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup() {
  Dxl.begin(3);
  Dxl.jointMode(Serv1);
  Dxl.jointMode(Serv2);
}

void loop() {
  Dxl.goalPosition(Serv1,155); //Servo 1 to 45 degrees
  delay(20);
  Dxl.goalPosition(Serv2,0); //Servo 2 to 0 degrees
  
  delay(490); //Delay .5 seconds at .5 seconds
  
  Dxl.goalPosition(Serv2,615); //Servo 2 to 180 degrees
  
  delay(490); //Delay .5 seconds at 1 seconds
  
  Dxl.goalPosition(Serv1,311); //Servo 1 to 90 degrees
  delay(20);
  Dxl.goalPosition(Serv2,0); //Servo 2 to 0 degrees
  
  delay(490); //Delay .5 seconds at 1.5 seconds
  
  Dxl.goalPosition(Serv2,615); //Servo 2 to 0 degrees
  
  delay(490); //Delay .5 seconds at 2 seconds
}

