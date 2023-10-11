#include<stdio.h>
int main()
{
	int sp,cp;
	scanf("%d",&sp,&cp);
	if(cp>sp)
	{
		printf("loss");
		int i=cp-sp;
		printf("%d",i);
	}
	else
	{
		printf("profit");
	}
}   
