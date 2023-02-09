#include <fstream>
#include <iostream>
using namespace std;
int i,nr,n,v[10];
void afisare(int &n, int v[10])
{
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
void stergere(int &n,int v[], int k)
{
    if(nr==0)
        cout<<"Lista Vida";
    else
        for(i=1;i<=n;i++)
            v[i]=v[i+1];
        n--;
}
void stergere_lista()
{
    int k,opt;
    if(n==0)
        cout<<"Lista Vida";
    else {do {cout<<"Pozitia="; cin>>k;}
    while(k<1||k>n);
        stergere(n,v,k);
        afisare(n,v);
    cout<<"Alta Stergere? Da=1 Nu=0";
    cin>>opt;
    } while(opt==1);
}
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    afisare(n,v);
    stergere_lista();
}
