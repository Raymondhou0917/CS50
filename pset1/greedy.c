#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("Hi! How much change is owed? \n");
    
    float amount;
do
{
    
    amount = GetFloat();
    if (amount < 0 )
    printf("Please enter a positive number for your change.\n");
    
}
while(amount < 0);

float money = round(amount * 100);
 
 //printf( "%.2f\n" , amount); // debugging purpose
 
int q = 25;
int d = 10;
int n = 5;
int p = 1;
int count = 0;

int number_q;
int number_d;
int number_n;
int number_p;

if (money > 0)
{
    while(money >= q)  
    {
    number_q = money / q;
    count =count + number_q;
    money = money - (q * number_q);
    }
    while(money >= d) 
    {
    number_d = money / d;
    count = count + number_d;
    money = money - (d * number_d);
    }
    while(money >= n) 
    {
    number_n = money / n;
    count = count + number_n;
    money = money - (n * number_n);
    }
    
    while(money >= p) 
    {
    number_p = money / p;
    count = count + number_p;
    money = money - (p * number_p);
    }
    
    printf("%d\n", count);
}
}