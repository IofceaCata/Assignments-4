#include<iostream>
using namespace std;
FindMinMax(int a[11],int &minim,int &maxim){
    int i;
    maxim=-9999;
    minim=9999;
    for(i=1;i<=10;i++){
        if(a[i]>=maxim)
            maxim=a[i];
        if(a[i]<=minim)
            minim=a[i];
    }
}
int main(){
    int i,a[11],minim,maxim;
    for(i=1;i<=10;i++)
        cin>>a[i];
    FindMinMax(a,minim,maxim);
    cout<<minim<<" "<<maxim;
}
