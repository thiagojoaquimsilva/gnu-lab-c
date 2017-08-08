#include "robot.h"
#include <time.h>

void vazio();
void pedra();
void teia();
void muro();
void saida();
void estranho();

void vazio()
{
  forward();
}

void pedra()
{
  take();
}

void teia()
{
  drop();
}

void muro()
{
  int i;
  srand( (unsigned)time(NULL) );
  i = (rand() % 2);	
  
	if (i == 0)
		left();
	else
		right();
}

void saida()
{
  escape();
}

void estranho()
{
  muro();
}

void ant()
{
  do{
      switch(look()){
        case Void:
             vazio();
             break;
        case Rock:
              pedra();
             break;
        case Web:
            teia();
            break;
        case Wall:
            muro();
            break;
        case Unknown:
            muro();
            break;
        case Exit:
          continue;  
      }
  }
  while(look() != Exit);
  escape();
}
