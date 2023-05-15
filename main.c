#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int main()
{
	int a,b;
	printf("enter the number\n");
	scanf("%d %d",&a,&b);
	printf("the addition -%d\n",add(a,b));
	printf("the subtraction-%d\n",sub(a,b));
	printf("the multiplication-%d\n",mul(a,b));
	return 0;
}
