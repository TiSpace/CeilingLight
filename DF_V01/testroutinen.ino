void RGB_Tests() {
  //********
  Serial.println("rot");
  analogWrite(PIN_red, 0x0);
  analogWrite(PIN_green, 0x400);
  analogWrite(PIN_blue, 0x400);
  delay(2000);

  Serial.println("gruen");
  analogWrite(PIN_red, 0x400);
  analogWrite(PIN_green, 0x00);
  analogWrite(PIN_blue, 0x400);
  delay(2000);
  Serial.println("blau");
  analogWrite(PIN_red, 0x400);
  analogWrite(PIN_green, 0x400);
  analogWrite(PIN_blue, 0x00);
  delay(2000);


}
