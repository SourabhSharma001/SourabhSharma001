//  sourabh sharma //
// calculator project using c language//
// 9/16/2021 //

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // declaration a local variable op
    int n1, n2, opt;
    float result;
    do
    {
        // displays the multiple operations of the C Calculator
        printf("select the operator to perform operation in calculator");
        printf("\n1 Addition\t\t2 Subtraction\n3 Multiplication\t4 Division\n5 square\t\t6 exit");
        printf("\nEnter your choice :-", opt);
        scanf("%d", &opt);// accepts a numeric input to choose the operation

        // use switch statement to call an operation
        switch (opt)
        {
        case 1:// It call addition function to add the given numbers
            printf("You choose Addition");
            printf("\nEnter the first no. :-");
            scanf("%d", &n1);
            printf("\nEnter the second no. :-");
            scanf("%d", &n2);
            result = n1 + n2;
            printf("\n The addition is :- %f", result);
            break;// Break the function
        case 2:// It call subtraction function to subtract the given numbers
            printf("You choose Subtraction");
            printf("\nEnter the first no. :-");
            scanf("%d", &n1);
            printf("\nEnter the second no. :-");
            scanf("%d", &n2);
            result = n1 - n2;
            printf("\n The subtraction is :- %f", result);
            break;// Break the function

        case 3:// It call the multiplication to multiplie the given numbers
            printf("You choose Multiplication");
            printf("\nEnter the first no. :-");
            scanf("%d", &n1);
            printf("\nEnter the second no. :-");
            scanf("%d", &n2);
            result = n1 * n2;
            printf("\n The multiplication is :- %f", result);
            break;// Break the function

        case 4:// It call the division function to divide the given numbers
            printf("You choose Division ");
            printf("\nEnter the first no. :-");
            scanf("%d", &n1);
            printf("\nEnter the second no. :-");
            scanf("%d", &n2);
            if (n2 == 0)

            {
                printf("\ncan't divided by zero! please enter another digit\n");
                scanf("%d", &n2);
            }

            result = n1 / n2;
            printf("\n The division is :- %f", result);
            break;
        case 5:// It call square root function to find the root of the given number
            printf("You choose Square ");
            printf("\nEnter the no. :-");
            scanf("%d", &n1);
            result = n1 * n1;
            printf("\n The square is :- %f", result);
            break;// Break the function

        case 6:// It call exit function to exit the program 
            printf("You choose exit");
            exit(0);
            break;// Break the function

        default:
            printf("something went wrong!! please try again");

            break;
        }
        printf("\n**************************************************************\n");

    } while (opt != 6);

    return 0;
}
