#include <Wire.h>
#include <Zumo32U4.h>
#include "kleuren.h"

kleuren::kleuren(int a, int b, int[]): minimumWaarde(a), maximumWaarde(b){

}

 string kleuren::minmaxDisplay(){
  string kleurWaarden = "max:" << minimumWaarde << " max:" << maximumWaarde;
  return kleurWaarden;
}
