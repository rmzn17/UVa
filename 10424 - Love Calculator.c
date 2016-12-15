#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int number,i,number1;
    char str[100],str1[100];
    while(gets(str))
    {
        gets(str1);
        number=0;
        number1=0;
        int len=strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]=='a'||str[i]=='A')
                number=number+1;
            else if(str[i]=='b'||str[i]=='B')
                number=number+2;
            else if(str[i]=='c'||str[i]=='C')
                number=number+3;
            else if(str[i]=='d'||str[i]=='D')
                number=number+4;
            else if(str[i]=='e'||str[i]=='E')
                number=number+5;
            else if(str[i]=='f'||str[i]=='F')
                number=number+6;
            else if(str[i]=='g'||str[i]=='G')
                number=number+7;
            else if(str[i]=='h'||str[i]=='H')
                number=number+8;
            else if(str[i]=='i'||str[i]=='I')
                number=number+9;
            else if(str[i]=='j'||str[i]=='J')
                number=number+10;
            else if(str[i]=='k'||str[i]=='K')
                number=number+11;
            else if(str[i]=='l'||str[i]=='L')
                number=number+12;
            else if(str[i]=='m'||str[i]=='M')
                number=number+13;
            else if(str[i]=='n'||str[i]=='N')
                number=number+14;
            else if(str[i]=='o'||str[i]=='O')
                number=number+15;
            else if(str[i]=='p'||str[i]=='P')
                number=number+16;
            else if(str[i]=='q'||str[i]=='Q')
                number=number+17;
            else if(str[i]=='r'||str[i]=='R')
                number=number+18;
            else if(str[i]=='s'||str[i]=='S')
                number=number+19;
            else if(str[i]=='t'||str[i]=='T')
                number=number+20;
            else if(str[i]=='u'||str[i]=='U')
                number=number+21;
            else if(str[i]=='v'||str[i]=='V')
                number=number+22;
            else if(str[i]=='w'||str[i]=='W')
                number=number+23;
            else if(str[i]=='x'||str[i]=='X')
                number=number+24;
            else if(str[i]=='y'||str[i]=='Y')
                number=number+25;
            else if(str[i]=='z'||str[i]=='Z')
                number=number+26;
        }
        int len1=strlen(str1);

        for(i=0; i<len1; i++)
        {
            if(str1[i]=='a'||str1[i]=='A')
                number1=number1+1;
            else if(str1[i]=='b'||str1[i]=='B')
                number1=number1+2;
            else if(str1[i]=='c'||str1[i]=='C')
                number1=number1+3;
            else if(str1[i]=='d'||str1[i]=='D')
                number1=number1+4;
            else if(str1[i]=='e'||str1[i]=='E')
                number1=number1+5;
            else if(str1[i]=='f'||str1[i]=='F')
                number1=number1+6;
            else if(str1[i]=='g'||str1[i]=='G')
                number1=number1+7;
            else if(str1[i]=='h'||str1[i]=='H')
                number1=number1+8;
            else if(str1[i]=='i'||str1[i]=='I')
                number1=number1+9;
            else if(str1[i]=='j'||str1[i]=='J')
                number1=number1+10;
            else if(str1[i]=='k'||str1[i]=='K')
                number1=number1+11;
            else if(str1[i]=='l'||str1[i]=='L')
                number1=number1+12;
            else if(str1[i]=='m'||str1[i]=='M')
                number1=number1+13;
            else if(str1[i]=='n'||str1[i]=='N')
                number1=number1+14;
            else if(str1[i]=='o'||str1[i]=='O')
                number1=number1+15;
            else if(str1[i]=='p'||str1[i]=='P')
                number1=number1+16;
            else if(str1[i]=='q'||str1[i]=='Q')
                number1=number1+17;
            else if(str1[i]=='r'||str1[i]=='R')
                number1=number1+18;
            else if(str1[i]=='s'||str1[i]=='S')
                number1=number1+19;
            else if(str1[i]=='t'||str1[i]=='T')
                number1=number1+20;
            else if(str1[i]=='u'||str1[i]=='U')
                number1=number1+21;
            else if(str1[i]=='v'||str1[i]=='V')
                number1=number1+22;
            else if(str1[i]=='w'||str1[i]=='W')
                number1=number1+23;
            else if(str1[i]=='x'||str1[i]=='X')
                number1=number1+24;
            else if(str1[i]=='y'||str1[i]=='Y')
                number1=number1+25;
            else if(str1[i]=='z'||str1[i]=='Z')
                number1=number1+26;
        }
        int name1=0,name2=0;

        while(number!=0)
        {
            name1+=number%10;
            number=number/10;

        }
        if(name1>9)
        {
            number=name1;
            name1=0;
            while(number!=0)
            {
                name1+=number%10;
                number=number/10;
            }

        }

        while(number1!=0)
        {
            name2+=number1%10;
            number1=number1/10;

        }
        if(name2>9)
        {
            number1=name2;
            name2=0;
            while(number1!=0)
            {
                name2+=number1%10;
                number1=number1/10;
            }

        }


        double percentage;

        if(name2>name1)
            percentage=(double)name1*100/(double)name2;
        else
            percentage=(double)name2*100/(double)name1;


        printf("%.2lf %%\n",percentage);


    }
    return 0;

}
