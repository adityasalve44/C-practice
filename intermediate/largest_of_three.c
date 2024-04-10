#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter three value");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b)
        {
            printf("\n A and B are same");
        }
        if(a>c)
        {
            printf("c is largest");
        }
        else if(b==c)
            {
                printf("\n B and c are same");  
            }
            if(b>a)
            {
                printf("a is largest");
            }
            else if (a==c)
                {
                    printf("\n A and C are same");
                }
                if(a>b)
                {
                    printf("b is largest");
                }
                else{
                    
                    if(a>b&&a>c)
                    {
                        printf("a is largest");
                    }
                    else if(b>a&&b>c)
                        {
                        printf("b is largest");
                        }
                        else printf("c is largest");   
                    }

    return 0;
}

