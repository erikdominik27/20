#include <stdio.h>

int sumodd(int a);

int main()
{ 
int a;
printf("Enter a number: ");
scanf("%d", &a);
printf("The sum of all odd numbers is: %d", sumodd(a));
}

int sumodd(int a)
{
    int i=1;
    int sum=0;
    while (i<=a){
        if (i % 2 != 0){
            sum += i;
        
        }
    i++;
    }
return sum;
}