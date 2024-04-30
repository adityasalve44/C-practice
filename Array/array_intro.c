#include<stdio.h>
int main()
{
    //data_type arr_name[len];
    
    // int mob_no[]={1,2,3,4,5,6,7,8,9,10};//Initialization
    
    // arrSize = sizeof(mob_no)/sizeof(int);

    int mob_no[10];

    printf("\nEnter Mobile Number:");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&mob_no[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        printf("%d ",mob_no[i]);  
    }
    printf("\n");
    return 0;
}


//int a ='65'
// %c-->A