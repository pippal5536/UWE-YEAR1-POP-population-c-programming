#include <stdio.h>
int main()
{
    const float POPULATION = 312032486.0;
    const float YEAR = 365.0;
    // fancy way: #define secondsInYears = 24.0 * 60.0 * 60.0 * YEAR;
    const float secondsInYears = 24.0 * 60.0 * 60.0 * YEAR;
    float userYear;
    float numOfbirths = secondsInYears / 7.0;
    float numOfDeaths = secondsInYears / 13.0;
    float numOfImmigrants = secondsInYears / 45.0;
    printf("Please write years ");
    // & is needed for user to input or else wont work
    scanf("%f", &userYear);
    float newPopulation;

    newPopulation = POPULATION + userYear * numOfbirths + userYear * numOfImmigrants - userYear * numOfDeaths;
    printf("%f", newPopulation);
    return 0;
}