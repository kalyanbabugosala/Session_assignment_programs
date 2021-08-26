#include<stdio.h>
#include<string.h>
#define max 100
char ch,str[max];
void removeChar(char str[], int len);
int main()
{
	int len;
	printf("Enter a string:");
	gets(str);
	printf("Enter a character you want to remove:");
	scanf("%c",&ch);
	len=strlen(str);
	removeChar(str,len);
	printf("Original string is:");
	puts(str);
	return 0;
}
void removeChar(char str[], int len)
{
	
	int i;
	printf("String after removing all occurances of a character:");
	for(i=0;i<len;i++)
	{
		if(str[i] != ch)
		{
			printf("%c",str[i]);
		}
	}
	printf("\n");
}

