#ifndef KLEUREN_H
#define KLEUREN_H

#include <Wire.h>
#include <Zumo32U4.h>
#include "kleurToewijzer"

class kleuren : public kleurToewijzer
{
  public:

  kleuren(int,int);
  ~kleuren();
  string minMaxDisplay();
  
  private: 

  int minimumWaarde;
  int maximumWaarde;







  
};
