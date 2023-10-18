#include "vex.h"
#include "sff.hpp"
using namespace vex;

void char_present(void)
{

  k3=contro1.Axis3.position(pct);
  k4=contro1.Axis4.position(pct);

  k=sqrt(k3^2+k4^2);
  if(k>=100)
  k=100;
  

  if(abs(k3)<abs(k4))
  {
     k3=0;
  }
if(abs(k4)<abs(k3))
  {
    if(k4>0)
    {
    chazhi=(abs(k3)-abs(k4))/abs(k3);
    chazhi=chazhi>0.4?0.4:chazhi;
    }
    else
    {
    chazhi=-(abs(k3)-abs(k4))/abs(k3);
    chazhi=chazhi<-0.4?-0.4:chazhi;
    }

chazhi=chazhi>0.4?0.4:chazhi;
     k4=0;
  }
}