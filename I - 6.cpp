#include<iostream>
#include<math.h>
using namespace std;
int ok=1;
void functie1(int ok ,int rez,int &a,int &b){
    if(ok==1)
        cin>>a>>b;
    else
        cout<<rez;

}
void calcul(int a,int b,int &c){
    c=sqrt(a*a+b*b);
}
int main(){
    int a,b,c;
    functie1(ok,c,a,b);
    ok=0;
    calcul(a,b,c);
    functie1(ok,c,a,b);


}
