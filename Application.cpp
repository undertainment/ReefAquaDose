#include "Application.h"
#include "Version.h"

void Application::begin() {
  Serial.begin(115200);
  delay(500);
  Serial.println();
  Serial.println("================================");
  Serial.println(FW_NAME);
  Serial.print("Version: ");
  Serial.println(FW_VERSION);
  Serial.println("Build: ");
  Serial.println(FW_BUILD);
  Serial.println("================================");
}

void Application::loop() {
}
