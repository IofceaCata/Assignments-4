#include<iostream>
using namespace std;
int x[100],q[100],n;
int cont(int k) {
    for (int i=1;i<k;i++)
        if (q[i] == q[k])
            return 0;
    return 1;
}
void back(int k){
    if(k>n){
        for(int i=1;i<=n;i++)
            cout<<x[q[i]];
        cout<<endl;
    }
    else{
        for(int i=2;i<=n+1;i++){
            q[k]=i;
            if (cont(k))
                back(k+1);
        }
    }
}
int main(){
    int i=1,j,aux,r;
    cin>>n;
    while(n!=0){
        r=n%10;
        x[i]=r;
        i++;
        n=n/10;
    }
    n=i;

     for(i=1;i<=n;i++)
            for(j=i+1;j<=n;j++)
                if(x[i]>x[j])
            {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
    n=n-1;
    back(1);
}
