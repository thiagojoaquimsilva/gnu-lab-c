#include "robot.h"

void ant()
{
  forward();
  forward();
  left();
  forward();
  while (look() != Rock)
  {
   left();
   left();
   forward();
   left();
   forward();
   forward();
   left();
   forward();
  }
  if (look() == Rock){
    take();
    right();
    right();
    forward();
    left();
   while (look() != Web){
        forward();
   }
  }
  drop();
  take();
  left();
  drop();
  right();
  forward();
  forward();
  left();
  while (look() == Void){
    forward();
  }
  if (look() == Wall){
      left();
  }
  if (look() == Rock){
    take();
    if (look() == Rock){
      left();
      left();
      drop();
    }
    forward();
    forward();
    left();
    drop();
  }
  take();
  left();
  drop();
  right();
  while (look() == Void){
    forward();
  }
  do{
  take();
  while (look() == Void){
    forward();
  }
  drop();
  }
  while (look() == Web);
}
