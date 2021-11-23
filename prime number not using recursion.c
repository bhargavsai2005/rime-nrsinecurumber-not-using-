#include<stdio.h>
int isprime(int,int);
int main(){
int num,prime;
printf("\n enter the prime number:");
scanf("%d",&num);
if(num==0||num==1)
printf("\n%d is not prime number:",num);
else
{
	prime = is prime(num,num/2);
	if (prime==1)
	printf("\n%d is prime number:",num);
	else
	printf("\n%d is ot prime number:",num);
}
return 0
{
	int isprime(int num,int i)
	{
		if(i=1)
	{
		return 1;
	}
	else{
		if(num%i==0)
		return 0;
		else
		is prime(num,i -1);
	}
		
	

		

