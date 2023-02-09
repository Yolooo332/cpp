#include <fstream>
#include <iostream>
#include <math.h>
//#include <bits/stdc++.h>
using namespace std;
int n, v[101], i, mini, maxi, x, a[10], k, z;
void citire(int &n, int v[101]);
void citire_f(int &n,int v[101]);
void afisare(int n, int v[101]);
int suma(int n, int v[101]);
void inlocuire(int n, int v[101]);
void min_max(int &mini, int &maxi, int n, int v[101]);
int exista(int n, int v[101], int x);
int ordonate(int n, int v[101]);
void numar_cifre(int n, int v[101], int a[10]);
int pare(int n, int v[101]);
void palindrom(int n, int v[101]);
int prod_prime(int n, int v[101]);
int cmmdc(int minn, int maxx);
int media(int n, int v[101]);
void ordonare(int n, int v[101]);
void inserare(int n, int v[101], int k, int z);
void stergere(int n, int v[101]);
void meniu();

void citire(int &n, int v[101]) {
  cout<<"Cate numere citite?";
  cin>>n;
  cout << "Introduceti numerele: ";
  for (i = 1; i <= n; i++)
    cin >> v[i];
}
void citire_f(int &n,int v[101]) {
  ifstream fin("numere.in");
  fin >> n;
  for (i = 1; i <= n; i++)
    fin >> v[i];
  fin.close();
}
void afisare(int n, int v[101]) {
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
}
int suma(int n, int v[101]) {
  int s = 0;
  for (i = 1; i <= n; i++)
    s = s + v[i];
  return s;
}
void inlocuire(int n, int v[101]) {
  cin >> k >> x;
  v[k] = x;
}
void min_max(int &minn, int &maxx, int n, int v[101]) {
  mini = v[1];
  maxi = v[1];
  for (i = 1; i <= n; i++) {
    if (mini > v[i])
      mini = v[i];
    if (maxi < v[i])
      maxi = v[i];
  }
}
int exista(int n, int v[101], int x) {
  cin >> x;
  int ok = 0;
  i = 1;
  while (i <= n && !ok) {
    if (v[i] == x)
      ok = 1;
    i++;
  }
  return ok;
}

int ordonate(int n, int v[101]) {
  int ok = 1;
  i = 1;
  while (ok == 1 && i < n) {
    if (v[i] > v[i + 1])
      ok = 0;
    i++;
  }
  return ok;
}
void numar_cifre(int n, int v[101], int a[10]) {
  for (i = 1; i <+ n; i++)
    while (v[i] != 0) {
      a[v[i] % 10]++;
      v[i] = v[i] / 10;
    }
  for (i = 0; i < 10; i++)
    cout << "cifra " << i << " apare de " << a[i] << " ori" << endl;
}
int pare(int n, int v[101]) {
  int ok = 1;
  for (i = 1; i <= n; i++)
    if (v[i] % 2 != 0)
      ok = 0;
  return ok;
}
void palindrom(int n, int v[101]) {
  int inv, c;
  bool ok = 0;
  for (i = 1; i <= n; i++) {
    inv = 0;
    c = v[i];
    while (c != 0) {
      inv = inv * 10 + c % 10;
      c = c / 10;
    }
    if (v[i] == inv){
        ok = 1;
        cout << v[i] << " ";
    }
  }
  if (!ok)
    cout << "Nu exista";
}
int prod_prime(int n, int v[101]) {
  int p = 1, d, nr;
  for (i = 1; i <= n; i++) {
    nr = 0;
    for (d = 2; d <= sqrt(v[i]); d++)
      if (v[i] % d == 0)
        nr++;
    if (nr == 0)
      p = p * v[i];
  }
  return p;
}
int cmmdc(int minn, int maxx) {
  min_max(minn, maxx, n, v);
  while (minn != maxx)
    if (maxx > minn)
      maxx = maxx - minn;
    else
      minn = minn - maxx;
  return minn;
}

int media(int n, int v[101]) {
  float s = 0; int nr = 0;

  for (i = 1; i <= n; i++)
    {
    if (abs(v[i])>9 && abs(v[i])<100)
    {
      nr++;
      s = s + v[i];
    }}
    s=s/nr;
    return s;
}
void ordo(int n, int v[101]) {
  int j;
  for (i = 1; i < n; i++)
    for (j = i + 1; j <= n; j++)
      if (v[i] > v[j]) {
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
}
void inserare(int n, int v[101], int k, int z) {
  int j;
  cin >> k >> z;
  i = 1;
  while (i <= n) {
    if (v[i] % 10 == k) {
      for (j = n; j >= i + 1; j--)
        v[j + 1] = v[j];
      v[i + 1] = z;
      n++;
      i++;
    }
    i++;
  }
}
void stergere(int n, int v[101]) {
  int j;
  i = n;
  while (i >= 1) {
    if (v[i] % 2 ==1) {
      for (j = i + 1; j <= n; j++)
        v[j - 1] = v[j];
      n--;
      i = 1;
    }
    i--;
  }
}

int main() {
  cout << "Citesti de la tastatura (1) sau din fisier (2)?" << endl;
  int ok;
  cin >> ok;
  if (ok == 1) {
    citire(n, v);
  } else {

    citire_f(n, v);
  }
  meniu();
  return 0;
}
void meniu() {
  int w;
  do {
  cout << "1. Sa se afiseze elementele lui v, pe o linie, separate prin spatiu\n";
  cout << "2. Sa se scrie suma elementelor lui v\n";
  cout << "3. Sa se inlocuiasca elementul de pe pozitia k cu valoarea x data.\n";
  cout << "4. Sa se determine valoarea maxima, respectiv minima\n";
  cout << "5. Sa se verifice daca in v exista o valoare x\n";
  cout << "6. Sa se verifice daca elementele lui v sunt ordonate\n";
  cout << "7. Sa se scrie de cate ori apare fiecare cifra in scrierea elementelor lui v\n";
  cout << "8. Sa se scrie daca v are doar elemente pare\n";
  cout << "9. Sa se scrie elementele de tip palindrom sau mesajul nu exista\n";
  cout << "10. Sa se scrie produsul tuturor elementelor prime\n";
  cout << "11. Sa se scrie cmmdc dintre valoarile maxima si minima\n";
  cout << "12. Media aritmetica a elementelor cu exact doua cifre\n";
  cout << "13. Ordonarea\n";
  cout << "14. Dupa fiecare element care are cifra unitatilor k sa se insereze valoarea z\n";
  cout << "15. Sa se stearga ultimul element impar\n";
  cout << "Ce alegi?";

  int optiune;
  cin >> optiune;
  switch (optiune) {
  case 1:
    afisare(n, v);
    break;
  case 2: {
    cout << suma(n, v) << endl;
    break;
  }
  case 3: {
    inlocuire(n, v);
    afisare(n, v);
    break;
  }
  case 4: {
    min_max(mini, maxi, n, v);
    cout << maxi << " " << mini;
    break;
  }
  case 5: {
    if (exista(n, v, x) == 1)
      cout << "Exista";
    else
      cout << "Nu exista";
    break;
  }
  case 6: {
    if (ordonate(n, v) == 1)
      cout << "Elementele sunt ordonate";
    else
      cout << "Elementele nu sunt ordonate";
    break;
  }
  case 7:
    numar_cifre(n, v, a);
    break;
  case 8: {
    if (pare(n, v) == 1)
      cout << "Vectorul are doar elemente pare";
    else
      cout << "Vectorul contine elemente pare cat si impare";
    break;
  }
  case 9:
    palindrom(n, v);
    break;
  case 10: {
    cout << prod_prime(n, v);
    break;
  }
  case 11: {
    cout << cmmdc(mini, maxi);
    break;
  }
  case 12: {
    cout << media(n,v);
    break;
  }
  case 13: {
    ordo(n, v);
    afisare(n, v);
    break;
  }
  case 14: {
    inserare(n, v, k, z);
    afisare(n, v);
    break;
  }
  case 15: {
    stergere(n, v);
    afisare(n, v);
    break;
  }
  }
  cout<<endl;
  cout<<"Doriti sa continuati? DA(1) sau NU(0)";
  cin>>w;
  }
  while (w==1);
}
