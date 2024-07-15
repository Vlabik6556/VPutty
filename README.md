# VPutty
## Библиотека для удобной работы с putty
  ``` c++
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
  ```
### Подробнее про символы:
[http://www.isthe.com/](http://www.isthe.com/chongo/tech/comp/ansi_escapes.html)
### Рекомендации
  - Использовать на плате Arduino Nano
## Спасибо:
[Cool Easy Diy Electronic](https://youtu.be/KTJewsBfqQY?si=Pny-jqZIq6W3leIa)

[AlexGyver](https://www.youtube.com/@AlexGyverShow)

Мой отец)

