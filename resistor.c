#include <stdio.h>
#include <stdlib.h>

float Vin = 0.0;
      Vled = 0.0;
      Iled = 0.0;
      R = 0.0;
int main(int argc, char *argv[])
{
    
    printf(" LED Calculator\n");
    printf(" --------------\n");
    printf(" Enter the value in Vin: ");
    scanf("%f",&Vin);
    printf("\n\n");
    printf(" Enter the value of Vled: ");
    scanf("%f",&Vled);
    printf("\n\n");
    printf(" Enter the value of Iled: ");
    scanf("%f",&Iled);
    printf("\n\n");

    R = (Vin - Vled)/Iled;

    printf("Vin = %.2f\n\n",Vin);
    printf("Vled = %.2f\n\n",Vled);
    printf("Iled = %.2f\n\n",Iled);
    printf("The resistor = %.2f Ohms\n\n",R);

    system("PAUSE");
    return 0;
}
