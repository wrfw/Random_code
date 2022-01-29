#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

string d_to_p_U2(int liczba, int p){

string wynik=""; string cyfra; int n=4;

    while(!(pow(-2,(n-1))<=liczba && liczba<=(pow(2,(n-1))-1)))  n++;
if(liczba<0) liczba=pow(2,n)-abs(liczba); else liczba=liczba;

    while(liczba!=0)
        {

        stringstream s;
        s<<liczba%p;
        cyfra=s.str();

        wynik=cyfra+wynik;
        liczba/=p;
    }

    while(wynik.length()<n) {wynik="0"+wynik;}

    return wynik;
}

int p_to_d(string liczba,int p)
{
    int wynik=liczba[0]-'0';

    for(int i=1;i<liczba.length();i++){
        wynik = wynik*p + liczba[i]-'0';
    }
    return wynik;
}

int U2_to_d(string liczba,int p){
int wynik;
    if(liczba[0]=='1') wynik=-1*(liczba[0]-'0');

    for(int i=1;i<liczba.length();i++){
        wynik=wynik*p +liczba[i]-'0';
    }

  return wynik;
}

void zegar(int h1,int h2, int m1, int m2)
{
    bool f=true;
    if(0>h1||h1>2){cout << "blad"; f=false;}
    if((h1==2&&(h2>4||h2<0))||(!(0<=h2||h2<=9))){cout << "blad"; f=false;}
    if(!(0<=m2<=5)) {cout << "blad"; f=false;}
    if((m1==5&&m2>9)||(!(0<=m2<=9))){cout << "blad"; f=false;}
    if(f==1){cout<< d_to_p_U2(h1,2) << " " << d_to_p_U2(h2,2) <<" : "<< d_to_p_U2(m1,2) << " " << d_to_p_U2(m2,2);}

}
int main(){

    zegar(2,3,4,0);

}
