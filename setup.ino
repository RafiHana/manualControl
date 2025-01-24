void setupLEDC() {

  ledcAttach(M1_RPWM, 1000, 16);
  ledcAttach(M1_LPWM, 1000, 16);
  ledcAttach(M2_RPWM, 1000, 16);
  ledcAttach(M2_LPWM, 1000, 16);
  ledcAttach(M3_RPWM, 1000, 16);
  ledcAttach(M3_LPWM, 1000, 16);
  ledcAttach(M4_RPWM, 1000, 16);
  ledcAttach(M4_LPWM, 1000, 16);
  ledcAttach(M5_RFKL, 1000, 16);
  ledcAttach(M5_LFKL, 1000, 16);
  ledcAttach(M6_RKPS, 1000, 16);
  ledcAttach(M6_LKPS, 1000, 16);

}

void setOled(){

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); 
  }
  display.display();
  delay(2000);
  display.clearDisplay();
  display.drawBitmap(0, 0, logo, 128, 64, WHITE);

  String textMiddle = "UNIVERSITAS SEMARANG";
  int textMiddleWidth = textMiddle.length() * 6; 
  int xMiddle = (SCREEN_WIDTH - textMiddleWidth) / 2; 
  display.setCursor(xMiddle, 25);  
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.print(textMiddle);

  display.setCursor(0, 37); 
  display.print("--------------------");

  String textBottom = "ROCSU";
  int textBottomWidth = textBottom.length() * 6; 
  int xBottom = (SCREEN_WIDTH - textBottomWidth) / 2; 
  display.setCursor(xBottom, 55); 
  display.print(textBottom);
  display.display();
}