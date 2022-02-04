
void writeSector_I(uint32_t value)
{

  uint8_t patternI_high = (value >> 8);
  uint8_t patternI_low =  (value & 0xFF);


  Wire.beginTransmission(0x21); // адресую сектор I
  Wire.write(0x12); // address port A
  Wire.write(patternI_high);  // value to send
  Wire.endTransmission();

  Wire.beginTransmission(0x21); // адресую сектор I
  Wire.write(0x13); // address port B
  Wire.write(patternI_low);  // value to send
  Wire.endTransmission();


}
