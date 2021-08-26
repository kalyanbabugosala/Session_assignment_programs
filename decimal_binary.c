#include<stdio.h>
#define BITS sizeof(unsigned int)*8
int main()
{
	int i,a[BITS],n;
	printf("Enter an number:");
	scanf("%d",&n);
	a[0]=n&1;
	for(i=1;i<BITS-1;i++)
	{
		a[i]=(n & (1 << i))?1:0;
	}
	for(i=0;i<BITS-1;i++)
	{
		printf("%d",a[i]);
	}
	
	return 0;
}
