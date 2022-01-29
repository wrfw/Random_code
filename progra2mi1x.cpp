#include <iostream>
using namespace std;

bool czyPierwsza(int x){
    if(x<2) return false;
    if(x>2){
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }

    }
    return true;
}


int main(){
    int suma=0;
    int a,b;
    cin>>a>>b;
    int i=a;
    while(i<=b){
        if(czyPierwsza(i))
            suma+=(i*i);
        i++;
    }
    cout<<suma;

return 0;
}
