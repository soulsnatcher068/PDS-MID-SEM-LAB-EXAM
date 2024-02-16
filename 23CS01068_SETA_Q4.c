//number as sum of two primes
#include<stdio.h>
int prime(int a);// prototype for prime function
void main()
{
    int num;
    
    printf("\nEnter number = ");
    scanf("%d",&num);
    int counter=0; //counter for possiblity of number to be expressed in two primes
    for(int i=1;i<=num/2;i++)
    {
        if(prime(i)==1 && prime(num-i)==1)
        {
            printf("\n%d\t%d",i,num-i);
            counter++;
        } 
    }
    if(counter==0) printf("\nThe given number cannot be expressed in sum of two primes");
}

//prime fuction definition
int prime(int n)
{
    int i,div=0;
    for(int i=1;i<=n;i++) if(n%i == 0) div+=1;
    if(div == 2) return 1;
    else return 0;
}
/*OUTPUTS
Enter number = 16

3       13
5       11

Enter number = 3

The given number cannot be expressed in sum of two primes
*/