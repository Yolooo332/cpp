#include <iostream>
using namespace std;
void detcifre(int n,int &pc,int &uc)
{
    int copie=n;
    uc=copie%10;
    while(copie>=10)
        copie/=10;
    pc=copie;

}
