#include <stdio.h>
#include <math.h>

float FIRSTNUMBER, SECONDNUMBER;
char OPERATOR;

void USER_INPUT(){

    printf("ENTER THE FIRST NUMBER -> ");
    scanf("%f", &FIRSTNUMBER);
    printf("ENTER THE SECOND NUMBER -> ");
    scanf("%f", &SECONDNUMBER);
    printf("ENTER THE OPERATOR -> ");
    scanf(" %c", &OPERATOR);
}

void BINARYOUTPUT()
{
    if (OPERATOR == '-')
    {
        float RESULT = FIRSTNUMBER - SECONDNUMBER;

        printf("UNROUNDED RESULT -> %f\n", RESULT);
        printf("ROUNDED RESULT -> %.2f\n", RESULT);
    }
    else if (OPERATOR == '+')
    {

        float RESULT = FIRSTNUMBER + SECONDNUMBER;

        printf("UNROUNDED RESULT -> %f\n", RESULT);
        printf("ROUNDED RESULT -> %.2f\n", RESULT);
    }
    else if (OPERATOR == '*')
    {
        float RESULT = FIRSTNUMBER * SECONDNUMBER;

        printf("UNROUNDED RESULT -> %f\n", RESULT);
        printf("ROUNDED RESULT -> %.6f\n", RESULT);
    }
    else if (OPERATOR == '/')
    {
        float RESULT = FIRSTNUMBER / SECONDNUMBER;

        printf("UNROUNDED RESULT -> %f\n", RESULT);
        printf("ROUNDED RESULT -> %.6f\n", RESULT);
    }
    else
    {
        printf("%c -> IS INVALID OPERATOR TRY AGAIM WITH VALID ONE.", OPERATOR);
    }
}

int main()
{
    USER_INPUT();
    BINARYOUTPUT();

    return 0;
}