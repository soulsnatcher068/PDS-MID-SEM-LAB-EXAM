//strong number
#include<stdio.h>
int fact(int n);//prototype for factorial function
void main()
{
    int num;

    printf("\nEnter the number = ");
    scanf("%d",&num);
    int fact_sum=0,numcpy=num;

    //Calculating sum of factorials
    while(num>0)
    {
        fact_sum+=fact(num%10);
        num/=10;
    }

    //checking if sum of factorials is equal to the number
    if(numcpy==fact_sum) printf("\nThe number %d is a strong number",numcpy);
    else printf("\nThe number %d is not a strong number",numcpy);
    // printf("\n%d",fact(5));

}

//factorial function definition
int fact(int a)
{
    // if(a==0) return 1;
    // else return a*fact(a-1);
    int f=1;
    while(a!=0)
    {
        f*=a;
        a--;
    }
    return f;
}


/*
OUTPUTS
Enter the number = 145

The number 145 is a strong number

Enter the number = 0

The number 0 is a strong number
*/