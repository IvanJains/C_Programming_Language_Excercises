#include<stdio.h>

/*print Celsius-Fahrenheit table
    for Celsius = 0, 20, ..., 300 */

int main(){

    float fahr, celsius;
    int lower, upper, step;

    printf("Celsius \t Fahrenheit\n");

    lower = 0;      //lower limit
    upper = 300;    //upper limit
    step = 20;      //step size

    celsius = lower;
    while (celsius <= upper){
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%7.0f \t %10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}