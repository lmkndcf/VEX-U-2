/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       z                                                         */
/*    Created:      2023/10/16 20:17:21                                       */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "sff.hpp"
using namespace vex;



int main() {
    
    bool sd;
    while(1)
     {
        if(sd==0)
        sd=contro1.ButtonA.pressing();    //按下A键电机启动
        if(sd)
        {

           contro1.Screen.clearScreen();
           
           char_present();    //检测转轴的数值
           if(k3>0&&k4==0)//向前
           {
           motor2.spin(fwd,k+k*chazhi,pct);//左边电机
           motor4.spin(fwd,k+k*chazhi,pct);
           motor1.spin(vex::directionType::rev,k-k*chazhi,pct);//右边电机
           motor3.spin(vex::directionType::rev,k-k*chazhi,pct);
           
           }
           else if(k3<0&&k4==0)//向后
           {
           motor2.spin(vex::directionType::rev,k+k*chazhi,pct);
           motor4.spin(vex::directionType::rev,k+k*chazhi,pct);
           motor1.spin(fwd,k-k*chazhi,pct);
           motor3.spin(fwd,k-k*chazhi,pct);
           
           }
           else if (k3==0&&k4<0)//向左
           {
           motor2.spin(fwd,k,pct);
            motor4.spin(fwd,k,pct);
            motor1.spin(fwd,k,pct);
            motor3.spin(fwd,k,pct);
          
           }
           else if (k3==0&&k4>0)//向右
           {
            
             motor2.spin(vex::directionType::rev,k,pct);
             motor4.spin(vex::directionType::rev,k,pct);
             motor1.spin(vex::directionType::rev,k,pct);
             motor3.spin(vex::directionType::rev,k,pct);
           }
           else 
           {
            motor1.stop();
            motor2.stop();
            motor3.stop();
            motor4.stop();
           }
           
           contro1.Screen.setCursor(1,1);
           contro1.Screen.print("电机运作");
           
           k=0;k2=0;k3=0;k4=0;
        }
        if(contro1.ButtonB.pressing())    //按下B键所有电机停止
        {
            contro1.Screen.clearScreen();
            motor1.stop();
            motor2.stop();
            motor3.stop();
            motor4.stop();
            contro1.Screen.setCursor(2,1);
            contro1.Screen.print("电机停止");
            sd=0;
        }
       
    }
}
