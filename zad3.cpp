#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>
int N=10;

using namespace std;

void losuj(int t[]){
    for(int i=0;i<N;i++)
    {
        t[i]=rand()%10000;
    }
}

bool czy_pierwsza(int k){
    if(k<2) return false;
    if(k>=2){
        for(int i=2;i*i<=k;i++){
            if(k%i==0) return false;
        }
        return true;
    }
}



int DL(int liczba){
int k=0;
    while(liczba>0)
    {
        k++;
        liczba=liczba/10;
    }
    return k;
}


string konwersja(int liczba,int p){
    string w=""; string cyfra;
    while(liczba!=0){
        stringstream s;
        s<<liczba%p;
        cyfra=s.str();
        w=cyfra+w;
        liczba/=p;
    }
    while(wynik.lenght()<8) w="0"+w;
    return w;
}

void reprezentacja(int liczba, int p){

}

int indeks(int T[],int a,int b){
int m=T[a]; int k=a;
for(int i=a;i<=b;i++)
    if(T[i]<m) {k=i;m=T[i];}
    return l;
}

void zamiana(int T[],int a,int b){
    swap(T[a],T[b])

}
void sortowanie(int T[],int n){
    for(int i=0;i<n;i++){
        zamiana(T,i,indeks(T,i,n));
    }
}

int main(){
srand(time(NULL));
int t[N];
losuj(t);
int b[N];

sortowanie(T,10);



return 0;
}
