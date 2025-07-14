// AREA, SURFACE AREA AND VOLUME CALCULATOR.

#include <stdio.h>
#include <math.h>
#include <unistd.h>
int main(){
    // DEFINING VARIABLES.
    double radius = 0.0f;
    const double PI = 3.14;
    double area = 0.0f;
    double volume = 0.0f;
    double SurfaceArea = 0.0f;
    printf("please enter a radius (in cm): ");
    scanf("%lf", &radius);
    // CALCULATING FORMULAS:
    area = PI * pow(radius, 2);
    SurfaceArea = 4 * PI * pow(radius, 2);
    volume = (4./3.) * PI * pow(radius, 3);
    //PRINTING THE RESULTS.
    printf("The area of the circle is: %lf cm square.\n", area);
    sleep(1);
    printf("The surface area of the sphere is: %lf cm square.\n", SurfaceArea);
    sleep(1);
    printf("The volume of the sphere is: %lf cm cube.\n", volume);
    sleep(1);
    printf("THANK YOU FOR USING OUR SERVICE :).\n\n\n");
    sleep(2);


}


