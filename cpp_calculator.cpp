#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float FIRSTNUMBER, SECONDNUMBER;
char OPERATOR;

void USER_INPUTS(){

    cout << "ENTER THE FIRST NUMBER -> ";
    cin >> FIRSTNUMBER;
    cout << "ENTER THE SECOND NUMBER -> ";
    cin >> SECONDNUMBER;
    cout << "ENTER THE OPERATOR -> ";
    cin >> OPERATOR;
}

void BINARY_OUTPUT(){
    if (OPERATOR == '+')
    {
        float RESULT = FIRSTNUMBER + SECONDNUMBER;
        float ROUNDED = round(RESULT * 100) / 100.0;

        cout << "UNROUNDED RESULT -> " << RESULT << "\n";
        cout << "ROUNDED RESULT -> " << ROUNDED << "\n";
    }
    else if (OPERATOR == '-')
    {
        float RESULT = FIRSTNUMBER - SECONDNUMBER;
        float ROUNDED = round(RESULT * 100) / 100.0;

        cout << "UNROUNDED RESULT -> " << RESULT << "\n";
        cout << "ROUNDED RESULT -> " << ROUNDED << "\n";
    }
    else if (OPERATOR == '/')
    {
        float RESULT = FIRSTNUMBER / SECONDNUMBER;
        float ROUNDED = round(RESULT * 100) / 100.0;

        cout << "UNROUNDED RESULT -> " << RESULT << "\n";
        cout << "ROUNDED RESULT -> " << ROUNDED << "\n";
    }
    else if (OPERATOR == '*')
    {
        float RESULT = FIRSTNUMBER * SECONDNUMBER;
        float ROUNDED = round(RESULT * 100) / 100.0;

        cout << "UNROUNDED RESULT -> " << RESULT << "\n";
        cout << "ROUNDED RESULT -> " << ROUNDED << "\n";
    }
    else
    {
        cout << OPERATOR << "-> IS INVALID OPERATOR TRY AGAIN WITH VALID ONE.";
    }
}
