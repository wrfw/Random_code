#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>
int N=10;
#define r 10
using namespace std;

void losuj(int t[]){
    for(int i=0;i<N;i++)
    {
        t[i]=rand()%10000;
    }
}

struct punkt {
    char e, float x,y;
};

punkt P[r];

void punkty(){
    int kod=65;
    for(int i=0;i<r;i++){
        P[i].e=(char)kod+i;
        P[i].x=50-rand()%100;
        P[i].y=25-rand()%100;
    }
}

int main(){
srand(time(NULL));
int t[N];
losuj(t);
int b[N];





return 0;
}
