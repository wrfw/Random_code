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

bool czypierwsza(int x){
    if(x<2) return false;
    else
    {
        int i=2;
        while(i*i<=liczba){
            if(liczba%i==0) return false;
            i++
        }
    }
    return true;
}

}
int suma(int n){
    int i=1;
    int s=0;
     while(i<=n){
        if(czypierwsza(i)) s+=i;
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
