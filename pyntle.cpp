#include <iostream>
using namespace std;

int f(int x,int a){
a=100;
return x+10;
}

void drukuj(int n)
{
    int i = 1;

    while(i<=n){
        int j=1;
            while(j<=i){
                cout<<j;
                j++;
            }


        cout << endl;
        i++;
    }
}

int main(){

    int x=5;
    drukuj(x);



 return 0;
}
