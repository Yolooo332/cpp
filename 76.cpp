#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[21];
    cin>>s;
    while(strlen(s)>0)
    {
        cout<<s<<"\n";
        strcpy(s,s+1);
        s[strlen(s)-1]=NULL;

    }
    return 0;
}
