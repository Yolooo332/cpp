#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[51], s2[51];
    cin.getline(s1,50);
    char *p;
    s2[0]='\0';
    p=strtok(s1," ");
    while(p!=NULL)
    {
        p[0]-=32;
        p[strlen(p)-1]-=32;
        strcat(s2,p);
        strcat(s2," ");
        p=strtok(NULL," ");
    }
    cout<<s2;
    return 0;

}
