#include "robot.h"

void ant()
{
  while(look() == Void){
      forward();
      }
      right();
  for(int i=0; i<3; i++)
      forward();
  escape();
}
