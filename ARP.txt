#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        char ip[10][20]={"192.168.0.64","192.168.0.60","192.168.0.68","132.147.3.3"};
        char et[10][20]={"00_A8_00_40_8E_FS","00_16_17_31_8e_22","00_16_17_31_8E_F7","00_16_17_31_8E_08"};
        char ipaddr[20],macaddr[20];
        int i,op;
        int x=0,y=i;
        while(1)
        {
                printf("\n\n1.ARP 2.RARP 3.EXIT  \n");
                printf("\nEnter the choice \n");
                scanf("%d",&op);
                switch(op)
                {
                        case 1:
                        printf("\nEnter ip address \n");
                        scanf("%s",ipaddr);
                        for(i=0;i<=20;i++)
                        {
                                if(strcmp(ipaddr,ip[i])==0)
                                {
                                        printf("MAC address is  : %s",et[i]);
                                        x=1;
                                }
                        }
                        if(x==0)
                        printf("Invalid IP address\n");
                        x=0;
                        break;

                        case 2:
                        printf("Enter MAC address\n");
                        scanf("%s",macaddr);
                        for(i=0;i<=20;i++)
                        {
                                if(strcmp(macaddr,et[i])==0)
                                {
                                        printf("IP address is   :  %s",ip[i]);
                                        y=1;
                                }
                        }
                        if(y==0)
                        printf("Invalid ethernet address \n");
                        y=0;
                        break;
                        case 3:
                        exit(0);
                }
        }
        return 0;
}
