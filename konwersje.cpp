#include <iostream>
#include <sstream>
using namespace std;

string d_top_p(int liczba, int p){

string wynik=""; string cyfra;

    while(liczba!=0)
        {
      if(liczba%p>9){

        switch(liczba%p){

            case 10:{cyfra="A";break;}
            case 11:{cyfra="B";break;}
            case 12:{cyfra="C";break;}
            case 13:{cyfra="D";break;}
            case 14:{cyfra="E";break;}
            case 15:{cyfra="F";break;}

        }

    }
    else{
        stringstream s;
        s<<liczba%p;
        cyfra=s.str();
    }
        wynik=cyfra+wynik;
        liczba/=p;
    }

    //while(wynik.length()<8) {wynik="0"+wynik;}

    return wynik;
}


int main(){

cout<< d_top_p(170,16);

}
