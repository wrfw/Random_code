#include <iostream>
#include <cmath>
using namespace std;

float obl(float x,float y,float z){

return sqrt(3)+pow((x+2*y),10)+z;
}

int main(){
float x,y,z;
cout<<"Podaj kolejno x,y oraz z"<<endl;
cin>>x>>y>>z;

cout<<obl(x,y,z)<<endl;

}
