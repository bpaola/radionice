#pragma once
#include "helper.h"
void RobotLine::radionica() {
  static int brojac = 0;
  char simbol[10 + sizeof(char)];

  if (setup()){
  armOpen();
  }

  if (brojac >= 9){
      stop(), end();
  }
  
  if (front() < 120) {
    if (brojac == 0) {
       go(-90, 90);
      delayMs(500);
      brojac++;
    }
    else {
      go(90, -90);
      delayMs(500);
      brojac++;
    }

  if (rightFront() < leftFront()) {
        if (rightFront() > 120)
          go(80, 20);
        else
          go(20, 80);
      }
  else {
    if (leftFront() > 120)
     go(20, 80);
    else
     go(80, 20);
  }

  if ((rightFront() > 120) and (rightFront() > 120)) {
    go(50, 50);
    delayMs(500);
  }

  sprintf(simbol, "%d", brojac);
  display(simbol);

  }
}
