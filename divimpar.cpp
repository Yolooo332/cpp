#include <iostream>
using namespace std;
int DifParImpar(int n)
{
    if(n<10)
        if (n%2==1)
            return -1;
        else return 1;
    else if(n%2==1)
        return DifParImpar(n/10)-1;
    else return DifParImpar(n/10)+1;

}
int main()
{
    int n;
    cin>>n;
    cout<<DifParImpar(n);
}
