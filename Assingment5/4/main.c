#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[1000];
    int i,alphabet=0,digits=0,special=0;
    printf("Enter the string : ");
    gets(s);
    int len=strlen(s);
    for(i=0;i<=len;i++)
    {
        if(isdigit(s[i])) digits++;
        else if(isalpha(s[i])) alphabet++;
        else special++;
    }
    printf("Number of alphabets :%d\n",alphabet);
    printf("Number of digits :%d\n",digits);
    printf("Number of special characters :%d",special);

    return 0;
}
