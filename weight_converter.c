// WEIGHT CONVERTER PROGRAM

#include <stdio.h>
#include <string.h>
int main(){
    int choice = 1; // 1 by default
    float weightinkilo = 0;
    float weightinpound = 0;
    printf("   ** Weight Conversion Calculator**\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Please enter your choice (1 or 2 [1 is default]): ");
    scanf("%d", &choice);
    if (choice == 1){
        printf("Enter the weight in kilograms: ");
        scanf("%f", &weightinkilo);
        weightinpound = weightinkilo * 2.2046;
        printf("%.2f kilograms is equal to %.2f in pounds.", weightinkilo, weightinpound);
    }
    else if(choice != 1 && choice!=2){
        printf("Enter the weight in kilograms: ");
        scanf("%f", &weightinkilo);
        weightinpound = weightinkilo * 2.2046;
        printf("%.2f kilograms is equal to %.2f in pounds.", weightinkilo, weightinpound);
    }
    else{
        printf("Enter the weight in pounds: ");
        scanf("%f", &weightinpound);
        weightinkilo = weightinpound / 2.2046;
        printf("%.2f pounds is equal to %.2f in pounds.", weightinpound, weightinkilo);
    }
} 