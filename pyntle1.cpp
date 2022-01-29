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

bool test1(int liczba1, int liczba2){
    if(liczba1==liczba2) return true;
    else return false;
}

void drukuj(int n,int jaka_suma){
    int i=1;
     while(i<=n){
        if(test1(sumaCyfr(i,10),jaka_suma))    cout << i << endl;
        i++;
     }

}
int suma(int n,int jaka_suma){
    int i=1;
    int s=0;
     while(i<=n){
        if(test1(sumaCyfr(i,10),jaka_suma)) s+=i;
        i++;
     }
return s;
}

int main(){

int n;
int jaka_suma;

cout<<"podaj n"<<endl;
cin>>n;
cout<<"podaj sumê"<<endl;
cin>>jaka_suma;

drukuj(n,jaka_suma);
cout<<endl<<"suma liczby wynosi: "<<suma(n,jaka_suma);
 return 0;
}
