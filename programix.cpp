#include <iostream>
using namespace std;

float pierwsza(float x){
if(x>1) return (2*(1+x))/x;
else if(x<0&&x>=-1) return 1/(2*(1+x));
else return (x-1)*(2+x);
}

float druga(float x){
if(2<x&&x<=5) return 0;
if(x>5) return (x+1)*(x-2);
 cout<<"wartoœæ nieokreœlona";
}

float trzecia(float x){
if(x>1) return (2*(1+x))/x;
if(x>0&&x<=1) return 1/(2*(1+x));
if(x==0) cout<<"nie dzielimy przez 0, dzbanie"<<endl;
else cout<<"wartosc nieokreslona"<<endl;
}

int main(){
cout<<trzecia(505050);
}
