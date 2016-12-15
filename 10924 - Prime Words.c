#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int number,i;
    char str[100];
    while(gets(str))
    {
        number=0;
        int len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='a')
                number=number+1;
            else if(str[i]=='b')
                number=number+2;
            else if(str[i]=='c')
                number=number+3;
            else if(str[i]=='d')
                number=number+4;
            else if(str[i]=='e')
                number=number+5;
            else if(str[i]=='f')
                number=number+6;
            else if(str[i]=='g')
                number=number+7;
            else if(str[i]=='h')
                number=number+8;
            else if(str[i]=='i')
                number=number+9;
            else if(str[i]=='j')
                number=number+10;
            else if(str[i]=='k')
                number=number+11;
            else if(str[i]=='l')
                number=number+12;
            else if(str[i]=='m')
                number=number+13;
            else if(str[i]=='n')
                number=number+14;
            else if(str[i]=='o')
                number=number+15;
            else if(str[i]=='p')
                number=number+16;
            else if(str[i]=='q')
                number=number+17;
            else if(str[i]=='r')
                number=number+18;
            else if(str[i]=='s')
                number=number+19;
            else if(str[i]=='t')
                number=number+20;
            else if(str[i]=='u')
                number=number+21;
            else if(str[i]=='v')
                number=number+22;
            else if(str[i]=='w')
                number=number+23;
            else if(str[i]=='x')
                number=number+24;
            else if(str[i]=='y')
                number=number+25;
            else if(str[i]=='z')
                number=number+26;
            else if(str[i]=='A')
                number=number+27;
            else if(str[i]=='B')
                number=number+28;
            else if(str[i]=='C')
                number=number+29;
            else if(str[i]=='D')
                number=number+30;
            else if(str[i]=='E')
                number=number+31;
            else if(str[i]=='F')
                number=number+32;
            else if(str[i]=='G')
                number=number+33;
            else if(str[i]=='H')
                number=number+34;
            else if(str[i]=='I')
                number=number+35;
            else if(str[i]=='J')
                number=number+36;
            else if(str[i]=='K')
                number=number+37;
            else if(str[i]=='L')
                number=number+38;
            else if(str[i]=='M')
                number=number+39;
            else if(str[i]=='N')
                number=number+40;
            else if(str[i]=='O')
                number=number+41;
            else if(str[i]=='P')
                number=number+42;
            else if(str[i]=='Q')
                number=number+43;
            else if(str[i]=='R')
                number=number+44;
            else if(str[i]=='S')
                number=number+45;
            else if(str[i]=='T')
                number=number+46;
            else if(str[i]=='U')
                number=number+47;
            else if(str[i]=='V')
                number=number+48;
            else if(str[i]=='W')
                number=number+49;
            else if(str[i]=='X')
                number=number+50;
            else if(str[i]=='Y')
                number=number+51;
            else if(str[i]=='Z')
                number=number+52;
        }
        int flag=1;
        int j;
        for(j=2;j<=sqrt(number);j++)
        {
            if(number%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
              printf("It is a prime word.\n");

        else if(flag==0)
             printf("It is not a prime word.\n");

    }
    return 0;

}
