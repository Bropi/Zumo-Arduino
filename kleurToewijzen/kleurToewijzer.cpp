#include <Wire.h>
#include <Zumo32U4.h>
#include "kleurCalibratie.h"



  kleurToewijzer::kleurToewijzer(int LinesensorValues[5]) : sensorValues[5](LinesensorValues[5]) {
  for (int i = 0; i < 5; i++) {
    sensorValues[i] = LinesensorValues[i];
  }
}

  void kleurToewijzer::minMax(int[5]sensorValues()){

    // Bereken het aantal elementen in de array
  int length = sizeof(values) / sizeof(values[0]);

  // Initialisatie van laagste en hoogste met het eerste element van de array
  int lowest = values[0];
  int highest = values[0];

  for (int j = 1; j < length; j++) {
    if (values[i] < lowest) {
        lowest = values[i];
  }
    if (values[i] > highest) {
        highest = values[i];
  }
  
  }

  int[5] kleurToewijzer::sensorValuesReturn(){
    return sensorValues();
  }

}
