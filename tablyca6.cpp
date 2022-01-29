#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>



using namespace std;


void drukuj(int T[],int n){
    for(int i=0;i<n;i++) {
    cout.width(4); cout<<T[i];}

    cout<<endl;
}

void dane(int T[],int Q[],int n){
    srand(time(NULL));

    for(int i=0;i<n;i++){
    T[i]=rand()%6+1;
    Q[i]=rand()%10+1;
    }
}

int nr(int T[],int n){
int index=0;
    int d=T[0];
    for(int i=1;i<n;i++){
        if(d>T[i]) {d=T[i]; index=i+1; }

    }

return index;
}

void zamiana(int T[], int a, int b){
    int x=T[a];
    T[a]=T[b];
    T[b]=x;

}

int suma_wag(int B[],int n){
    int s=0;
    for(int i=0;i<n;i++) {
        s+=B[i];
    }
}

int cal(int A[],int B[],int n){
    int d=0;
    for(int i=0;i<n;i++){
        d+=A[i]*B[i];
    }
    return d;
}

int main(){
    int n=10;
    int A[n];
    int B[n];
    dane(A,B,n);
    drukuj(A,n);
    drukuj(B,n);



    cout<<cal(A,B,n)/suma_wag(B,n)<<endl;
return 0;
}
