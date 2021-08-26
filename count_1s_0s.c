#include<stdio.h>
#define BITS sizeof(unsigned int)*8
void count(int bit[]);
int main()
{
	int i,a[BITS],n;
	printf("Enter an number:");
	scanf("%d",&n);
	for(i=0;i<BITS-1;i++)
	{
		a[i]=(n & (1 << i))?1:0;
	}
	for(i=BITS-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	count(a);
	return 0;
}
void count(int bit[])
{
	int i,c1=0,c2=0;
	for(i=BITS-1;i>=0;i--)
	{
		if(bit[i])
		{
			c1++;
		}
		else
		{
			c2++;
		}
	}
	printf("\n1's=%d   0's=%d",c1,c2);
}
