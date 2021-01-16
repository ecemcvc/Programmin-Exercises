#include <stdio.h>
#include <stdlib.h>
int prime(int a)
{
	int i;
	for(i=2;i<a;i++) if(a%i==0) return 0;
	return 1;
}
int main()
{
	int low, up, i;
	printf("Enter lower bound:  ");
	scanf("%d", &low);
	printf("\nEnter upper bound:  ");
	scanf("%d", &up);
	printf("\nBetween %d and %d the number of prime is: \n",low,up);
	for(i=low;i<=up;i++) if(prime(i)==1)  printf("%4d",i);

	return 0;
	
}
