#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[101],s2[101],cuv[101];
    char voc[]="aeiouAEIOU";
    int i,j;
    int exista=0;
    cin.getline(s1,101);
    char *p;
    s2[0]='\0';
    p=strtok(s1," ");
    //int n=strlen(cuv);
    while(p!=NULL)
    {
         strcpy(cuv,p);
         for(i=0;i<strlen(cuv);i++)
        {
            if(strchr(voc,cuv[i])!=0)
            {
                for(j=strlen(cuv);j>=i+1;j--)
                    cuv[j+1]=cuv[j];
                cuv[i+1]='*';
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
