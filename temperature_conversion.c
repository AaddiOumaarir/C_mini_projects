// Simple Temperature conversion program
#include <stdio.h>

int main(){

    char choice = '\0';
    float celsiusToF = 0.0f;
    float FtoCelsius = 0.0f;
    
    printf("    ***TEMPERATURE CONVERSION***\n");
    printf("A. Celsius to fehrenheit.\n");
    printf("B. Fehrenheit to celsius.\n");
    printf("Choose please: ");
    scanf("%c", &choice);
    if(choice == 'A'){
        printf("Enter the temperature in C: ");
        scanf("%f", &celsiusToF);
        FtoCelsius = celsiusToF*(9./5.) + 32;
        printf("%f in fahrenheit is %.1f", celsiusToF, FtoCelsius);
    }
    else{
        printf("Enter the temperature in F: ");
        scanf("%f", &FtoCelsius);
        celsiusToF = (FtoCelsius - 32) * (5./9.);
        printf("%f in fahrenheit is %.1f", FtoCelsius, celsiusToF);
    }
    
    return 0;
}