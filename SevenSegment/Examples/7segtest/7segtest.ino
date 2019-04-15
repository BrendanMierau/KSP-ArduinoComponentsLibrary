#include <SevenSegment.h>
const int pinStart = 30;
const int digStart = 10;
SevenSegment display1(pinStart, digStart);

void setup() {}

void loop() {
  display1.fullDisplay(1234);
}
