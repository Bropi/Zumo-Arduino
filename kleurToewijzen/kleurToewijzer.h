#ifndef KLEURTOEWIJZER_H
#define KLEURTOEWIJZER_H

#include <Wire.h>
#include <Zumo32U4.h>

class kleurToewijzer

{
  public:

  kleurToewijzer(int[5]);
  ~kleurToewijzer();
  void minMax(int[5]);
  
  private: 

  int sensorValues[5];






  
};
