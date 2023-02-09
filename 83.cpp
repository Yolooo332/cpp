#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[26];
    cin>>s;
    int i;
    for(i=0;i<strlen(s);i++)
        if(strchr("aeiouAEIOU",s[i])!=0)
            cout<<s[i];
    return 0;
}
