#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[101],s2[101],cuv[16];
    cin.getline(s1,100);
    cin>>cuv;
    char *p;
    s2[0]='\0';
    p=strtok(s1," ");
    while(p!=NULL)
    {
        strcat(s2,p);
        if(strcmp(p,cuv)==0)
        {
            strcat(s2,"?");
        }
        strcat(s2," ");
        p=strtok(NULL," ");
    }
    cout<<s2;
    return 0;
}
