#include "VPutty.h"

VPutty::VPutty() {
  
}

void VPutty::clear() {
  Serial.write(27);
  Serial.write("[2J");

  Serial.write(27);
  Serial.write("[0;0H");
}

void VPutty::cursor(int x, int y) {
  Serial.write(27);
  Serial.write("[");
  Serial.write(x);
  Serial.write(";");
  Serial.write(y);
  Serial.write("H");
}

void VPutty::graphic(int first){
  Serial.write(27);
  Serial.write("[");
  Serial.write(first);
  Serial.write("m");
}

void VPutty::graphic(int first, int second){
  Serial.write(27);
  Serial.write("[");
  Serial.write(first);
  Serial.write(";");
  Serial.write(second);
  Serial.write("m");
}

void VPutty::graphic(int first, int second, int third){
  Serial.write(27);
  Serial.write("[");
  Serial.write(first);
  Serial.write(";");
  Serial.write(second);
  Serial.write(";");
  Serial.write(third);
  Serial.write("m");
}
