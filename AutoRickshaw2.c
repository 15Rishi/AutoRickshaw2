#include<stdio.h>
void main()
{
    int num1;
    float kilo,time;
    printf("Enter the number 1 or 0");
    scanf("%d",&num1);
    if(num1==1)
    {
        printf("Enter the distance: ");
        scanf("%d",&kilo);
        printf("Enter the waiting time: ");
        scanf("%d",&time);
        if(kilo>=0 && kilo<=1.5)
        {
            if(time>=0 && time<=5)
            {
                time=1;
                kilo=23+time;
                printf("the cost is: %f",kilo);
            }
            else if(time>5 && time<=10)
            {
                time=2;
                kilo=23+time;
                printf("the cost is %f: ",kilo);
            }
            else
            {
                printf("Invalid");
            }
        }
        else
        {
            time=time*1;
            kilo=(kilo-1.5)*10;
            kilo=23+kilo+time;
            printf("the cost is: %f",kilo);
        }
    }
    else if(num1==0)
    {
        printf("Enter the distance: ");
        scanf("%d",&kilo);
        printf("Enter the waiting time: ");
        scanf("%d",&time);
        if(kilo>=0 && kilo<=1.5)
        {
            time=time*2;
            kilo=29+time;
            printf("the cost is: %f",kilo);
        }
        else
        {
            time=time*2;
            kilo=(kilo-1.5)*20;
            kilo=29+kilo+time;
            printf("the cost is: %f",kilo);
        }
    }
    else
    {
        printf("invalid");
    }
}
