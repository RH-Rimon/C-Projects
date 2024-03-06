#include<stdio.h>
int main()
{

    printf("Temperature Conversion Menu\n");
    printf("  1. Centigrade to Fahrenheit\n");
    printf("  2. Fahrenheit to Centigrade \a\n");
    printf("  3. Centigrade to kelvin\n");
    printf("  4. Kelvin to Centigrade\n");
    printf("  5. Kelvin to Fahrenheit\n");
    printf("  6. Fahrenheit to Kelvin \a\n");

    printf("\n");
    printf("\n");


    int num;
    double temp;
    printf("   Option: ");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
    {
        printf("   Enter the Centigrade Temperature: ");
        scanf("%lf",&temp);
        double result = (1.8*temp) + 32;
        printf("   The temperature in Fahrenheit is: %.2lf\n",result);
        break;


    }
    case 2:
    {
        printf("   Enter the Fahrenheit Temperature: ");
        scanf("%lf",&temp);
        double result = (temp-32)/1.8;
        printf("   The temperature in celsius is: %.2lf\n",result);
        break;
    }

    case 3:
    {
        printf("   Enter the Centigrade Temperature: ");
        scanf("%lf",&temp);
        double result = temp + 273;
        printf("   The temperature in Kelvin is: %.2lf\n",result);
        break;
    }
    case 4:
    {
        printf("   Enter the Kelvin Temperature: ");
        scanf("%lf",&temp);
        double result = temp -273;
        printf("   The temperature in celsius is: %.2lf\n",result);
        break;
    }
    case 6:
    {
        printf("   Enter the Fahrenheit Temperature: ");
        scanf("%lf",&temp);
        double result = (0.55*(temp-32))+273;
        printf("   The temperature in celsius is: %.2lf\n",result);
        break;
    }
    case 5:
    {
        printf("   Enter the Kelvin Temperature: ");
        scanf("%lf",&temp);
        double result = (1.8*(temp-273))+32;
        printf("   The temperature in Fahrenheit is: %.2lf\n",result);
        break;
    }
    default:
        printf("Choice a Right Option\n");
    }


    return 0;
}

