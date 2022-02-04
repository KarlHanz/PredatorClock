
void setup() {

  Serial.begin(9600);
  rtc.begin();
//  rtc.adjust(DateTime(2020, 9, 30, 17, 36, 0)); // SET THE CURRENT TIME
  mcp1.begin(0);      // use address 0
  mcp2.begin(1);      // use address 1

  pinMode(dimm, OUTPUT);

  Wire.beginTransmission(0x20);
  Wire.write(0x00); // IODIRA register
  Wire.write(0x00); // set entire PORT A to output
  Wire.endTransmission();

  Wire.beginTransmission(0x20);
  Wire.write(0x01); // IODIRB register
  Wire.write(0x00); // set entire PORT B to output
  Wire.endTransmission();

  Wire.beginTransmission(0x21);
  Wire.write(0x00); // IODIRA register
  Wire.write(0x00); // set entire PORT A to output
  Wire.endTransmission();

  Wire.beginTransmission(0x21);
  Wire.write(0x01); // IODIRB register
  Wire.write(0x00); // set entire PORT B to output
  Wire.endTransmission();










  

}
