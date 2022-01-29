#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void losowanie(int a[],int n){
    for(int i=0;i<n;i++)
        a[i]=rand()%1000;
}
void wyswietl(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
void znajdz1(int a[],int n,int x){
int i=0;
bool z=false;
while(i<n){
    if(a[i]==x){
        cout<<"Element jest na indeksie "<<i<<endl;
        z=true;
    }
    i++;
}
if(z==false) cout<<"Brak elementu"<<endl;
}
void znajdz2(int a[],int n,int x){
int l=0;int p=n;
int s=0;
bool z = false;
while(l<p){
s=(l+p)/2;
if(a[s]==x) {cout<<"Element jest znajduje sie na indeksie "<<s<<endl; z=true;}
if(a[s]<x) l=s+1;
else p=s-1;
}
if(z==false) cout<<"Nie ma elementu"<<endl;
}

int min(int a[],int n,int p){
    int m=a[p];
    for(int i=p+1;i<n;i++){
            if(a[i]<m){
                m=a[i];
            }
    }
    return m;
}
int max(int a[],int n,int p){
    int m=a[p];
    for(int i=p+1;i<n;i++){
            if(a[i]>m){
                m=a[i];
            }
    }
    return m;
}
void sortowanie_r(int a[],int n){

        int m;
    for(int i=0;i<n;i++){
            m=min(a,n,i);
        for(int j=i;j<n;j++){
            if(a[j]==m) swap(a[j],a[i]);
        }
    }
}
void sortowanie_m(int a[],int n){
    int m;
    for(int i=0;i<n;i++){
            m=max(a,n,i);
        for(int j=i;j<n;j++){
            if(a[j]==m) swap(a[j],a[i]);
        }
    }
}
bool czy_posortowane_r(int a[],int n){
    bool r = true;

    for(int i=1;i<n;i++){

        for(int j=0;j<i;j++){
            if(a[i]<a[j]) r=false;
        }

    }
    return r;
}
bool czy_posortowane_m(int a[],int n){
    bool m = true;

    for(int i=1;i<n;i++){

        for(int j=0;j<i;j++){
            if(a[i]>a[j]) m=false;
        }

    }
    return m;
}
void czy_posortowane(int a[],int n){
    if(czy_posortowane_r(a,n)==true) cout<<"tablica posortowana rosnaca"<<endl;
    if(czy_posortowane_m(a,n)==true) cout<<"tablica jest posortowana malejaco"<<endl;
    if(czy_posortowane_m(a,n)==false && czy_posortowane_r(a,n)==false) cout<<"tablica nie jest posortowana ani rosnaco, ani malejaco"<<endl;
}
int main(){
srand(time(NULL));
 //zmienne n,x, wprowadzanie n i tablica a[n]
int n,x;
cout<<"Podaj ilosc elementow"<<endl;
cin>>n;
int a[n];

 //wywolanie funkcji losowanie,sortowanie_m i wyswietl
losowanie(a,n);
sortowanie_r(a,n);
wyswietl(a,n);

//wprowadzanie x
cout<<"Podaj x:";
cin>>x;
cout<<endl;

 //funkcje szukaj¹ce i sprawdzaj¹ce posortowanie
znajdz1(a,n,x);
znajdz2(a,n,x);
czy_posortowane(a,n);

return 0;
}
