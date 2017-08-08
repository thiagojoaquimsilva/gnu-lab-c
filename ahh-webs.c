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
    forward();
    forward();
    left();
    forward();
    right();
    escape();
  }
  else{
  forward();
  forward();
  right();
  forward();
  left();
  escape();
  }
}
