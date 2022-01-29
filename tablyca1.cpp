#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

#define n 20

using namespace std;


void drukuj(int T[]){
    for(int i=0;i<n;i++) {
    cout.width(4); cout<<T[i];}

    cout<<endl;
}

void dane(int T[]){
    srand(time(NULL));

    for(int i=0;i<n;i++){
    T[i]=rand()%100;
    }
}

int main(){
    int T[n];
    dane(T);
    drukuj(T);
return 0;
}
