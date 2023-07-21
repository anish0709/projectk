#include <stdio.h>
int a, b, c, n, g;
int main()
{
    printf("Enter the number: ");
    scanf("%d", &a);

    b = (a / 10) % 10;

    c = a / 100;

    n = a % 10;
    
    printf("%d\n", n);
    printf("%d\n", b);
    printf("%d\n", c);

    switch (c)
    {
    case 1:
        printf(" one hundred");
        break;
    case 2:
        printf(" two hundred");
        break;
    case 3:
        printf(" three hundred");
        break;
    case 4:
        printf(" four hundred");
        break;
    case 5:
        printf(" Five hundred");
        break;
    case 6:
        printf(" Six hundred");
        break;
    case 7:
        printf(" Seven hundred");
        break;
    case 8:
        printf(" Eight hundred");
        break;
    case 9:
        printf(" Nine hundred");
        break;
    }

    g = a % 100;
    if (g>=11 && g<=19)
    {
        switch (b)
        {
        case 1:
            printf(" eleven");
            break;
        case 2:             
            printf(" twelve");
            break;
        case 3:
            printf(" thirteen");
            break;
        case 4:
            printf(" fourteen");
            break;
        case 5:
            printf(" Fifteen");
            break;
        case 6:
            printf(" Sixteen");
            break;
        case 7:
            printf(" Seventeen");
            break;
        case 8:
            printf(" Eighteen");
            break;
        case 9:
            printf(" Nineteen");
            break;
        }
    }
    else
    {
        switch (b)
        {
        case 1:
            printf(" ten");
            break;
        case 2:
            printf(" twent");
            break;
        case 3:
            printf(" thirty");
            break;
        case 4:
            printf(" fourty");
            break;
        case 5:
            printf(" Fifty");
            break;
        case 6:
            printf(" Sixty");
            break;
        case 7:
            printf(" Seventy");
            break;
        case 8:
            printf(" Eighty");
            break;
        case 9:
            printf(" Ninety");
            break;
        }
    }
    switch (n)
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
        printf(" Five");
        break;
    case 6:
        printf(" Six");
        break;
    case 7:
        printf(" Seven");
        break;
    case 8:
        printf(" Eight");
        break;
    case 9:
        printf(" Nine");
        break;
    }
}
