#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char* get_string(void);
char* split(char *string);
void correct(char*string);

int main()
{
    printf("Enter your string :) \n");
    char *s = get_string();
    correct(s);
    return 0;
}
char* get_string(void)
{
    char *string =(char*)malloc(sizeof(char));
    int i=0;
    char c;
    while((c =getchar()) !='\n'){
    string = realloc(string,sizeof(char)*(i+1));
    *(string+i)=c;
    ++i;

    }
    *(string+i)='\0';


    return string;
}
void correct(char*string)
{


    int i,j=0,m=0,l,words_num=1,biggest_word=0,temp;
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]==' ')
        {
            words_num++;
            temp=0;
        }
        else
        {
            temp++;
            if(temp>biggest_word)
            {
                biggest_word = temp;

            }
            else temp=0;
        }

    }
    char string2[words_num][biggest_word];
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]==' '||string[i]=='\0')
        {
            string2[m][j]='\0';
            m++;
            j=0;

        }
        else
        {
            string2[m][j] = string[i];
            j++;
        }

    }
    char string3[words_num][biggest_word];
    char verbs[2][3]={"are","is"};
    int error_count=0,k;
    for(i=0;i <=m;i++)
    {
        if(strcmp(string2[i],"we")==0||strcmp(string2[i],"We")==0)
        {
            for(k=0;k<=strlen(string2[i]);k++)
                {
                    string3[i][k]=string2[i][k];
                }
            if(strcmp(string2[i+1],"are")!=0)
            {

                error_count++;
                for(l=0;l<3;l++)
                {
                    string3[i+1][l]=verbs[0][l];
                }
                i++;

            }


        }
        else if(strcmp(string2[i],"he")==0||strcmp(string2[i],"she")==0||strcmp(string2[i],"it")==0||strcmp(string2[i],"He")==0||strcmp(string2[i],"She")==0||strcmp(string2[i],"It")==0)
        {
            for(k=0;k<=strlen(string2[i]);k++)
                {
                    string3[i][k]=string2[i][k];
                }
            if(strcmp(string2[i+1],"is")!=0)
            {

                error_count++;
                for(l=0;l<strlen(verbs[1]);l++)
                {
                    string3[i+1][l]=verbs[1][l];
                }
                i++;

            }


        }
        else
        {
            for(k=0;k<=strlen(string2[i]);k++)
            string3[i][k]=string2[i][k];
    }
    }
    printf("Grammatical Errors: %d\n",error_count);
        printf("Corrected Sentence: ");
    for(i=0;i <=m;i++)
        printf("%s ",string3[i]);
    printf("\n");

}



