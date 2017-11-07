#include<iostream>
using namespace std;
void  interchange(int &a,int &b){
    int aux;
    aux=a;
    a=b;
    b=aux;
}
int main(){
    int a,b;
    cin>>a>>b;
     interchange(a,b);
     cout<<a<<" "<<b;
}
