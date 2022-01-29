#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

#define n 20

using namespace std;


void drukuj(int T[]){ //to po prostu wyœwietla tablice
    for(int i=0;i<n;i++) {
    cout.width(4); cout<<T[i];}

    cout<<endl;
}

void dane(int T[]){ //to inicjuje losowe dane w tablicy
    srand(time(NULL));

    for(int i=0;i<n;i++){
    T[i]=rand()%100;
    }
}

void drukuj2(int T[]){ //to ma wypisaæ tablicê "od ty³u"
    for(int i=n-1;i>0;i--) cout<<T[i]<<endl;
}

double srednia(int t[]){ //liczy srednio w tablicy
    int s=0;

    for(int i=0;i<n;i++){
    s+=t[i];
    }
   return s/n;
}

void ile_od_srednia(int T[]){ //wyœwietla ile liczb jest powy¿ej œredniej
    double s = srednia(T);
    int j=0;
for(int i=0;i<n;i++){
    if(T[i]>s) j++;
}
cout<<s<<endl;
cout<<j<<endl;
}


int main(){
    int T[n];
    dane(T);
    drukuj(T);
    ile_od_srednia(T);
return 0;
}
