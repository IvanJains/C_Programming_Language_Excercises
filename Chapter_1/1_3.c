#include<stdio.h>

/*print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main(){

    float fahr, celsius;
    int lower, upper, step;

    printf("Fahrenheit \t Celsius\n");

    lower = 0;      //lower limit
    upper = 300;    //upper limit
    step = 20;      //step size

    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%10.0f \t %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}