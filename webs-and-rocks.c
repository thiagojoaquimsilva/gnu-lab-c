#include "robot.h"

void ant()
{
  left();
  forward();
  right();
  if (look() == Web) {
    right();
    forward();
    forward();
    left();
    while (look() == Void){
    forward();
    }
    take();
    left();
    left();
    drop();
  left();
  left();
  forward();
  forward();
  left();
  forward();
  right();  
  escape();
  }
  else{
  while (look() == Void){
    forward();
    }
  right();
  forward();
  left();
  escape();
  }
}
