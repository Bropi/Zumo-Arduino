#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4Buzzer buzzer;
Zumo32U4LineSensors lineSensors;
Zumo32U4ButtonA buttonA;

#define NUM_SENSORS 5
unsigned int lineSensorValues[NUM_SENSORS];

bool useEmitters = true;

void printReadingsToSerial()
{
  char buffer[80];
  sprintf(buffer, "%4d %4d %4d %4d %4d %c\n",
          lineSensorValues[0],
          lineSensorValues[1],
          lineSensorValues[2],
          lineSensorValues[3],
          lineSensorValues[4],
          useEmitters ? 'E' : 'e'
         );
  Serial.print(buffer);

  buttonA.waitForButton();
  
}

void setup()
{
  Serial.begin(9600);

  lineSensors.initFiveSensors();

  buttonA.waitForButton();
  buzzer.play("L16 ceg>c");
  kleurToewijzer zwartToewijzen(lineSensors.read(lineSensorValues, useEmitters ? QTR_EMITTERS_ON : QTR_EMITTERS_OFF);)
  kleuren zwart(zwartToewijzen.minMax(zwartToewijzen.sensorValuesReturn()));

  //speel geluid af en begin met uitlezen
  buttonA.waitForButton();

  buzzer.play("L16 ceg>c");

}


void loop()
{
  //  // Read the line sensors.
  lineSensors.read(lineSensorValues, useEmitters ? QTR_EMITTERS_ON : QTR_EMITTERS_OFF);

  printReadingsToSerial();

}











  
