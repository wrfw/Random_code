#include <iostream>
using namespace std;

bool Czypierwsza(int x){
if(x<2) return false;
if(x>=2){
    for(int i=2;i*i<=x;i++)
    if(x%i==0) return false;
}
return true;
}

void choinka(int h){
int i=1;
int j=1;
while(i<=h){
j=1;
while(j<=h-i){
    cout<<" ";
    j++;
}
j=1;
while(j<=2*i-1){
    cout<<"*";
    j++;
}
cout<<endl;
i++;
}

}

void dt(int a,int b){
    for(int i=a;i<=b;i++){
        if(Czypierwsza(i)){
            choinka(i);
        }
    }
    }


int main(){

dt(2,10);
return 0;
}
