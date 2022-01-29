#include <iostream>
#include <ctime>
#include <cstdlib>

int N=1000;

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

void pierwsza(int t[]){
 int k;
 for(int i=0;i<N;i++){
       k=t[i];
    if(czy_pierwsza(k)==true){
            cout<<i<<endl;
            break;
    }
 }

}

int main(){
srand(time(NULL));
int t[N];
losuj(t);


return 0;
}
