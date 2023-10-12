#include<stdio.h>
int main()
{
    int e,m,p,ch,cs;
    scanf("%d%d%d%d%d",&e,&m,&p,&ch,&cs);
    if(e>35&&m>35&&p>35&&ch>35&&cs>35)
    {
    printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}