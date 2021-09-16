#include <stdio.h>
#include "simpio.h"

int main ()
{
    int gram;
    float trafic_fees;

    printf("Dwso gram CO2/khm \n");
    gram=GetInteger();

    if (0<=gram<=120)
        {trafic_fees=gram*0.9;}
         else if(gram<=140)
         {trafic_fees=gram*1.1;}
          else
          {trafic_fees=gram*1.7;}
        printf("To poso pliromis einai : %d\n", trafic_fees);
    return 0;
}
