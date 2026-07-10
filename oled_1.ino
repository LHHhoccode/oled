#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin(8, 9);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);
  display.println("Hello Hung");
  display.setCursor(10,10);
  display.println("Arduino");
  display.display();

}

void loop() {
  // put your main code here, to run repeatedly:

}
