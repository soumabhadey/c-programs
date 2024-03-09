#include <stdio.h>
#include <string.h>
int main()
{
    char s[1];
    printf("Enter a sentence\n");
    gets(s);
    int l=strlen(s);
    char s1[l];
    char ab;
    int k=0;
    int i,j;
    for(i=0; i<l; i++)
    {
        ab=s[i];
        if((ab>='A'&&ab<='Z')||(ab>='a'&&ab<='z'))
        {
            s1[k]=ab;
            k++;
        }
        else
        {
            s1[k]='\0';
            if(strcmp(s1,"the")==0||strcmp(s1,"The")==0)
            {
                for(j=i-3; j<=l-4; j++)
                {
                    s[j]=s[j+4];
                }
                i=i-4;
            }
            for(j=0; j<k; j++)
                s1[j]='\0';
            k=0;
        }
    }
    printf("New sentence\n");
    puts(s);
    return 0;
}