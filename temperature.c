#include <stdio.h>
int main()
{
    float celsius;
    float fahrenheit;

    printf("Enter a degree in Celsius: ");
    scanf("%f", &celsius);
    // must declare values as number.0 as it counts as float. Only number will count as integer. Thats why output was showing
    // wrong ans. C sees 9/5 = 1 as integer and 9.0/5.0 = 1.8 as float
    fahrenheit = ((9.0 / 5.0) * celsius) + 32.0;

    printf("%.1f Celsius is %.1f Fahrenheit", celsius, fahrenheit);
    return 0;
}