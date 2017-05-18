#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float quarter = 0.25;
    float dime = 0.100000;
    float nickel = 0.05;
    float penny = 0.01;

    int quarterCount;
    int dimeCount;
    int nickelCount;
    int pennyCount;

    float change;

    cout << "Enter the amount of change: ";
    cin >> change;


    int counter;

    printf("You will need ");

    while(change >= quarter - 0.01){
        quarterCount++;
        change -= quarter;
    }
    if(quarterCount == 1)
        printf("%i quarter,", quarterCount);
    else if(quarterCount > 1)
        printf("%i quarters,", quarterCount);

    while(change >= dime - 0.01){
        dimeCount++;
        change -= dime;
    }
    if(dimeCount == 1)
        printf(" %i dime,", dimeCount);
    else if(dimeCount > 1)
        printf(" %i dimes," , dimeCount);
    while(change >= nickel - 0.01){
        nickelCount++;
        change -= nickel;
    }
    if(nickelCount == 1)
        printf(" %i nickel,", nickelCount);
    else if(nickelCount > 1)
        printf(" %i nickels," , nickelCount);

    while(change >= penny - 0.001){
        pennyCount++;
        change -= penny;
    }
    if(pennyCount == 1)
        printf(" and  %i penny\n", pennyCount);
    else if(pennyCount > 1)
        printf(" and %i pennies\n", pennyCount);

}