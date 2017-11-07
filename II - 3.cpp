#include<iostream>
using namespace std;
void minimmaxim(int a[32][32]){
    int i,minim=99999,maxim=-9999;
    for(i=1;i<=32;i++){
        if(minim>a[2][i])
            minim=a[2][i];
        if(maxim<a[1][i])
            maxim=a[1][i];
    }
    cout<<maxim<<" "<<minim;
}
void average(int a[32][32]){
    int i,s1=0,s2=0;
    for(i=1;i<=31;i++){
        s1=s1+a[1][i];
        s2=s2+a[2][i];
    }
    cout<<s1/31<<" "<<s2/31;
}
int main(){
    int a[32][32],i,j;
    for(i=1;i<=31;i++)
        cin>>a[1][i]>>a[2][i];
    average(a);
    minimmaxim(a);


}
