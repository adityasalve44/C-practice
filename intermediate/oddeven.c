#include<stdio.h>
int main()
{
    int a;
    printf("\nenter the value:");
    scanf("%d",&a);

        if(a%2==0)
        {
            printf("\n%d is EVEN\n",a);
        }
    else
        {
            printf("\n%d is ODD\n",a);
        }
    
    
    return 0;
}


/***
 * even == divisible by 2 =
 * conditional operator:    (condition) ? true block : false block;
 *  ? : 
*/