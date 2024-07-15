#include "VPutty.h"
// http://www.isthe.com/chongo/tech/comp/ansi_escapes.html
VPutty putty();
void setup() {
  Serial.begin(115200);
  Serial.print(millis());


}

void loop() {
  putty.clear();
  Serial.println(millis());

}
