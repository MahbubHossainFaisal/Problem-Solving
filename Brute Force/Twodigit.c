#include<stdio.h>
int main()
{
    int digit;
    printf("Insert a number of two digit:");
    scanf("%d",&digit);
    if(digit>=10 && digit<=20)
    {
        if(digit==10)
        {
            printf("Ten");
        }

        if(digit==11)
        {
            printf("Eleven");
        }

        if(digit==12)
        {
            printf("Twelve");
        }

        if(digit==13)
        {
            printf("Thirteen");
        }

        if(digit==14)
        {
            printf("Fourteen");
        }

        if(digit==15)
        {
            printf("Fifteen");
        }

        if(digit==16)
        {
            printf("Sixteen");
        }

        if(digit==17)
        {
            printf("Seventeen");
        }

        if(digit==18)
        {
            printf("Eighteen");
        }

        if(digit==19)
        {
            printf("Nineteen");
        }

        if(digit==20)
        {
            printf("Twenty");
        }
    }

    else
    {
        switch(digit/10)
        {
        case 2:
            printf("Twenty");
            break;

             case 3:
            printf("Thirty");
            break;

             case 4:
            printf("Forty");
            break;

             case 5:
            printf("Fifty");
            break;

             case 6:
            printf("Sixty");
            break;

             case 7:
            printf("Seventy");
            break;

             case 8:
            printf("Eighty");
            break;

             case 9:
            printf("Ninety");
            break;

             default:
                printf("Enter a proper value!");
        }

        switch(digit%10)
        {
        case 1:
            printf(" one");
            break;

             case 2:
            printf(" two");
            break;

             case 3:
            printf(" three");
            break;

             case 4:
            printf(" four");
            break;

             case 5:
            printf(" five");
            break;

             case 6:
            printf(" six");
            break;

             case 7:
            printf(" seven");
            break;

             case 8:
            printf(" eight");
            break;

             case 9:
            printf(" nine");
            break;

             default:
                printf("Enter a proper value!");
        }
    }
    return 0;
}
