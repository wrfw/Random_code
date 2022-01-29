#include <iostream>
using namespace std;

int sumaCyfr(int n,int p){
int s=0;

 while(n!=0){

    s+=n%p;
    n/=p;

 }
return s;
}



void drukuj(int n){
    int i=1;
     while(i<=n){
        if(sumaCyfr(i,10)%2==0)    cout << i << endl;
        i++;
     }

}
int suma(int n){
    int i=1;
    int s=0;
     while(i<=n){
        if(sumaCyfr(i,10)%2==0) s+=i;
        i++;
     }
return s;
}

int main(){

int n;
int jaka_suma;

cout<<"podaj n"<<endl;
cin>>n;


drukuj(n);
cout<<endl<<"suma liczby wynosi: "<<suma(n);
 return 0;
}
