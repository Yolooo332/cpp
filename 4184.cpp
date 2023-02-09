#include <iostream>
#include <cstring>
using namespace std;
void FNume(char s[], char id[])
{
    int i,j;
    for(i=0;s[i]!=' ';i++);
    i++;
    for(j=0;s[i];j++,i++)
        id[j]=s[i];
    id[j]=0;
    strcat(id,"2022");
}
int main()
{
    char a[51],b[51];
    cin.get(a,50);
    cin.get(b,50);
    FNume(a,b);
    cout<<b;
}
