#include "vex.h"
using namespace vex;

vex::brain       Brain;
vex::controller contro1;
vex::motor      motor1(0);
vex::motor      motor2(1);
vex::motor      motor3(2);
vex::motor      motor4(3);
int k,k2;
int k3,k4;      //前后左右
int chazhi=0;   //实现转弯更加丝滑
extern void char_present(void);

