#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


void drukuj(int T[],int s){ //to po prostu wyœwietla tablice
    for(int i=0;i<s;i++) {
    cout.width(4); cout<<T[i];}

    cout<<endl;
}

void dane(int T[],int s){ //to inicjuje losowe dane w tablicy
    srand(time(NULL));

    for(int i=0;i<s;i++){
    T[i]=rand()%100;
    }
}

void welomian(int T[],int s,int x){
    double sum=T[0];
    for(int i=1;i<s;i++){
        sum=T[i]+sum*x;
        cout<<sum<<endl;
    }
    cout<<sum<<endl;
}

int main(){

    int n;
    int x;

    cout<<"Iloœæ wspó³czynników: ";
    cin>>n;
    cout<<endl;
    cout<<"Podaj x: ";
    cin>>x;
    cout<<endl;
    int T[n];
    dane(T,n);
    drukuj(T,n);
    welomian(T,n,x);

return 0;
}
