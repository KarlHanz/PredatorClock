void loop() {
patternCode();
  digitalWrite (dimm, HIGH);

  DateTime now = rtc.now();
  mins = now.minute();
  sec = now.second();


writeSector_I(patternI);
writeSector_II(patternII);

// if (now.second() % 10 % 2 == 0) Serial.println(pattern, HEX); //мигалка секунд





}
