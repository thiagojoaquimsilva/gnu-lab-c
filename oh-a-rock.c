#include "robot.h"

void ant()
{
  forward();
  right();
  forward();
  take();
  for(int i=0; i<2; i++)
  left();
  drop();
  left();
  left();
  while(look() == Void){
  forward();
  }
  left();
  forward();
  right();
  escape();
}
