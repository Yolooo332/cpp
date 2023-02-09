#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[101],s2[101],*p,cuv[101];
    cin.get(s1,100);
    int i,j;
    s2[0]='\0';
    int exista=0;
    char voc[]="aeiouAEIOU";
    p=strtok(s1," ");
    while(p!=NULL)
    {
        strcpy(cuv,p);
        for(i=0;i<strlen(cuv);i++)
        {
            if(strchr(voc,cuv[i])!=0)
            {
                for(j=strlen(cuv);j>=i+1;j--)
                    cuv[j+1]=cuv[j];
                    cuv[j+1]='*';
                    i++;
                    exista=1;

            }

        }
        strcat(s2,cuv);
        strcat(s2," ");
        p=strtok(NULL," ");
    }
    if(exista==1)
        cout<<s2;
    else cout<<"FARA VOCALE";

    return 0;
}
