/*
print monthly expenditure
Practical 1, part 2 (a)
pippal
*/
#include <stdio.h>
int main()
{
    float foodExpenses;
    float leisureExpenses = 900.0;
    float clothExpenses = 600.0;
    const int ACCOMMODATION = 500.0;
    float travelExpenses = 200.0;
    float totalSpent;
    printf("\n Enter food expenses ");
    // & is for addressing variable in a memory
    scanf("%f", &foodExpenses);
    totalSpent = foodExpenses + leisureExpenses + clothExpenses + ACCOMMODATION + travelExpenses;

    printf("The total expenditure this month was \u00A3 %.2f\n\n", totalSpent);
    return 0;
}
/*
I learnt how to declare variables. Const variables can not be changed. scanf takes an input from user. printf prints the output.
#include<stdio.h> is mandotory is it brings all libraries. int main(){} is a function. We use int before main to
return some integer values when we want to terminate the programme using exit method. Also, using int main() is a good practice
*/