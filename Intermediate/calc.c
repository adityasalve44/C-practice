#include<stdio.h>
int main()
{
    int choice;
    float a,b;
    float add, sub, mul, div;

    do
    {
        printf("\n\t\tEnter\n\t\t1.Addition\n\t\t2.Subtraction\n\t\t3.Multiplication\n\t\t4.Division:\n\t\t5.Exit\n\n");
        scanf("%d",&choice);

        if(choice!=5)
        {
            printf("\nEnter Two Values:");
            scanf("%f %f",&a,&b);
        }

        switch (choice)
        {

        case 1:
            add = a+b;
            printf("\nAddition:%.3f\n",add);
            break;
        
        case 2:
            sub = a-b;
            printf("\nSubtraction:%.3f\n",sub);
            break;

        case 3:
            mul = a*b;
            printf("\nMultiplication:%.3f\n",mul);
            break;
        
        case 4:
            div = a/b;
            printf("\nDivision:%.3f\n",div);
            break;
        case 5:
            printf("\nExiting...\n");
            break;
        
        default:
            printf("\nEnter Valid Choice");
            break;
        }
        
    } while (choice!=5);
    
    return 0;
}
