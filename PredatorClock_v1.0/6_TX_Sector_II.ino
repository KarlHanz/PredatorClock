
void writeSector_II(uint32_t value)
{

  uint8_t patternII_high = (value >> 8);
  uint8_t patternII_low = (value & 0xFF); 


  Wire.beginTransmission(0x20); // адресую сектор II
  Wire.write(0x12); // address port A
  Wire.write(patternII_high);  // value to send
  Wire.endTransmission();

  Wire.beginTransmission(0x20); // адресую сектор II
  Wire.write(0x13); // address port B
  Wire.write(patternII_low);  // value to send
  Wire.endTransmission();


}
