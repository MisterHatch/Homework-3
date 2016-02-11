#define DXL_BUS_SERIAL1 1
#define DXL_BUS_SERIAL2 2
#define DXL_BUS_SERIAL3 3
#define Wheel_ID 1

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup() {
Dxl.begin(3);
Dxl.wheelMode(Wheel_ID);
}

void loop() {
Dxl.goalSpeed(Wheel_ID, 400);
delay(5000);
Dxl.goalSpeed(Wheel_ID, 400 | 0x400);
delay(5000);
Dxl.goalSpeed(Wheel_ID, 0);
delay(2000);
}

