#include <Wire.h>
#include "Adafruit_MCP23017.h"
#include "RTClib.h"


RTC_DS1307 rtc;
Adafruit_MCP23017 mcp1;
Adafruit_MCP23017 mcp2;

#define dimm 9


uint16_t pattern;
uint16_t patternI;
uint16_t patternII;

int mins, sec;
