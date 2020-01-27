#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char g[]="10001000000100001",p[50],c[50];
int n1,n2;

void xor()
{
        int i;
        for(i=0;i<n1;i++)
        {
                if(c[i]==g[i])
                {
                        c[i]='0';
                }
                else
                {
                        c[i]='1';
                }
        }
}


void crc()
{
        int i,count;
        for(count=0;count<n1;count++)
        {
                c[count]=p[count];
        }
        do
        {
                 if(c[0]=='1')
                 {
                         xor();
                 }
                 for(i=0;i<n1-1;i++)
                 {
                         c[i]=c[i+1];
                 }
                 c[i]=p[count++];
         }while(count<n2+n1);
 }




void main()
{
        int i,res;
char q[50];
        printf("Enter your code\n");
        scanf("%s",p);
        n1=strlen(g);
        n2=strlen(p);

        for(i=n2;i<n2+n1-1;i++)
        {
                p[i]='0';
        }
        crc();
        printf("Divider : %s\n",p);
 printf("Divisor : %s\n",g);
        for(i=n2;i<n2+n1;i++)
        {
                p[i]=c[i-n2];
        }
        printf("Code Word : %s\n",p);
        printf("Re enter code\n");
        scanf("%s",q);
 res = strcmp(p,q);
        if (res==0)
        printf("no error found at the receiver\n");
    else
        printf("error found at the receiver\n");
}
