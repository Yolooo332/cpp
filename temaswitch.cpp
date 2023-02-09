#include <iostream>
#include <fstream>

using namespace std;

int n,v[100],i;//variabile globale

void citire (int &n,int v[100]);// citeste de la tastatura n si elementele lui v
void afisare (int n, int v[100]);
void citire_f (int &n, int v[100]);
int suma(int n, int v[100]);// suma tuturor elementelor lui v
void inlocuire(int n, int v[100], int k, int x);
void min_max(int &min, int &max);// calculeaza mnin si max, parametri prin adresa
int verificare(int n, int v[100], int x);
int verificare_ordonare(int n, int v[100]);
void cifre (int n, int v[100]);
void pare(int n,int v[100]);
int palindrom ( int v[100]);
void produs_prime(int n,int v[100]);
int cmmdc_min_max(int n, int v[100], int &min, int &max);
int medie(int n, int v[100]);
void ordonare(int n, int v[100]);
void inserare(int &n, int v[100], int k, int z);
void stergere_ultim_impar(int &n, int v[100]);
void meniu();//afiseaza optiunile si lucreaza una dintre ele
int main()
{
    cout<<"Citesti de la tastatura (1) sau din fisier (2)? \n";
    int ok;
    cin>>ok;
    if (ok==1) citire(n,v);
        else citire_f(n,v);
    afisare(n,v);
    cout<<endl;
   /* cout<<suma(n,v);
    cout<<endl;
    int k; int x;
    do
    {
        cout<<"pozitia=";
        cin>>k;
    }
    while(k<1 || k>n);
    cout<<"valoarea=";cin>>x;
    inlocuire(n,v,k,x);
    afisare(n,v);
    cout<<endl;*/
    int max,min;
    min_max(min,max);
    cout<<min<<" "<<max;
    meniu();
    return 0;
}


void citire (int &n,int v[100])
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];

}

void afisare (int n, int v[100])
{
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";

}
void citire_f (int &n, int v[100])
{
    ifstream f("date.in");
    f>>n;
    for (i=1;i<=n;i++)
        f>>v[i];
    f.close();
}
int suma (int n, int v[100])
{
    int s=0;//variabila locala
    for(i=1;i<=n;i++)
      s=s+v[i];
    return s;
}
void inlocuire(int n, int v[100], int k, int x)
{
    v[k]=x;

}
void min_max(int &min, int &max)
{
   min=v[1];
   max=v[1];
   for(i=2;i<=n;i++)
   {
     if(v[i]>max)
        max=v[i];
     if(v[i]<min)
        min=v[i];
   }
}
int verificare(int n, int v[100], int x)
{
    int ok=0;
    i=1;
    while (i<=n && ok==0)
    {
        if (v[i]==x) ok=1;
        i++;
    }
    return ok;
}
int verificare_ordonare(int n, int v[100])
{
    int ok; ok=1; i=1;//presupun ca vectorul este ordonat
    while(ok==1 && i<n)
    {
        if(v[i]>v[i+1])
            ok=0;
        i++;
    }
    return ok;
}
void cifre (int n, int v[100])
{
    int x, f[10];
    for(i=1;i<=n;i++)
        x=v[i];
    while(x){
        f[x%10]++;
        x/=10;
    }
}
void pare(int n,int v[100])
{
    int c=0;
    for(i=1;i<=n;i++)
        if(v[i]%2==0)
            c++;
    if(c==1)
        cout<<"Vectorul are doar elemente pare"<<" ";
    else
        cout<<"Vectorul nu are doar elemente pare"<<" ";
}
int palindrom ( int v[100])
{
    int inv=0;
    while(v[i]){
        inv=inv*10+v[i]%10;
        v[i]/=10;
}
    return inv;
}
void produs_prime(int n,int v[100])
{
    int p=1;
    for(i=1;i<=n;i++)
        if(v[i]%2==0)
            p=p*v[i];
}
int cmmdc_min_max(int n, int v[100], int &min, int &max)
{
    int r;
    min=v[1];
    max=v[1];
    for(i=2;i<=n;i++)
        if(min>v[i])
            min=v[i];
    for(i=2;i<=n;i++)
        if(max<v[i])
            max=v[i];
    while(min!=0)
        r=max%min;
        max=min;
        min=r;
    return max;

}
int medie(int n, int v[100])
{
    int nr=0, s=0, i=1;
    for(i=1;i<=n;i++)
        if(v[i]>9 && v[i]<100)
            s=s+v[i];
            nr++;
    cout<<float(s/nr)<<" ";
}
void ordonare(int n, int v[100])
{
    int aux=0, j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(v[i]>v[j])
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
}
void inserare(int &n, int v[100], int k, int z)
{
    int i,j;
    for(i=1;i<=n;i++)
        if(v[i]%10==k)
        {
            for(j=n;j>=i+1;j--)
                v[j+1]=v[j];
            v[i+1]=z;
            n++;
            i++;
        }
}
void stergere_ultim_impar(int &n, int v[])
{
    int j,i;
    for(i=n;i>=1;i--)
        if(v[i]%2==1)
    {
        for(j=i;j<=n-1;j++)
            v[j]=v[j+1];
        n--;
        break;
    }

}
void meniu()
{
    cout<<"\n1. Sa se afiseze elementele lui v, pe o linie, separate prin spatiu\n";
    cout<<"2. Sa se scrie suma elementelor lui v\n";
    cout<<"3. Sa se inlocuiasca elementul de pe pozitia k cu valoarea x data\n";
    cout<<"4. Sa se determine valoarea maxima, respectiv minima\n";
    cout<<"5. Sa se verifice daca in v exista o valoare x\n";
    cout<<"6. Sa se verifice daca elementele lui v sunt ordonate\n";
    cout<<"7. Sa  se scrie de cate ori apare fiecare cifra in scrierea elementelor lui v\n";
    cout<<"8. Sa se scrie daca v are doar elemente pare\n";
    cout<<"9. Sa se scrie elementele de tip palindrom sau mesajul nu exista\n";
    cout<<"10. Sa se scrie produsul tuturor elementelor prime\n";
    cout<<"11. Sa se scrie cmmdc dintre valoarile maxima si minima\n";
    cout<<"12. Media aritmetica a elementelor cu exact doua cifre\n";
    cout<<"13. Ordonarea\n";
    cout<<"14. Dupa fiecare element care are cifra unitatilor k sa se insereze valoarea z\n";
    cout<<"15. Sa se stearga ultimul element impar\n";

    cout<<"Ce alegi?";int optiune; cin>>optiune;
    switch(optiune)
    {
        case 1: afisare(n,v);break;
        case 2: {cout<<suma(n,v);cout<<endl;break;}
        //case 3: min_max(n,v)
        //case 4:
        case 5: {int x; cout<<"x="; cin>>x; cout<<verificare(n, v, x); break;}
        case 6: cout<<verificare_ordonare(n, v); break;
        case 7: cifre(n,v); break;
        case 8: pare(n,v); break;
        case 9: cout<<palindrom(v); break;
        case 10: produs_prime(n,v); break;
        case 11: {int min,max; cout<<"min="; cin>>min; cout<<"max="; cin>>max; cout<<cmmdc_min_max(n,v,min,max); break;}
        case 12: cout<<medie(n,v); break;
        case 13: ordonare(n,v); break;
        case 14: {int k,z; cout<<"k="; cin>>k; cout<<"z="; cin>>z; inserare(n,v,k,z); break;}
        case 15: stergere_ultim_impar(n,v); break;
    }
}
