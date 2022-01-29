#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

#define sys 2

using namespace std;

int dl_bit(int liczba,int sys){
    int lic = 0;

    while(liczba!=0){
        liczba=liczba%sys;
        lic++;
    }
    return lic;
}

void bin_w_tab(int liczba, int T[]){
    int dl=dl_bit(liczba,2);
    for(int i=dl;i>0;i++){
        T[i]=liczba%2;
        liczba=liczba%2;
    }
    cout<<T<<endl;
}

int main(){
    int liczba;
    int tab

return 0;
}
