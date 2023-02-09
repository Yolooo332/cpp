#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100];
    int i;
    cin.get(s,99);
    for(i=0;s[i];i++)
        if('A'<=s[i] && s[i]<='Z')
            s[i]=s[i]+('a'-'A');
        else if ('a'<=s[i] && s[i]<='z')
            s[i]=s[i]-32;
    cout<<s;
}
