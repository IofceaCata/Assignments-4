#include <iostream>
using namespace std;
int main() {
	int n,b1,b2,nr=0,r,p=1;
	cin >>n>>b1>>b2;
	while(n!=0) {
		r=n%10;
		n=n/10;
		nr=nr+r*p;
		p=p*b1;
	}
	cout<<nr<<endl;

	n=nr;
    nr=0,r,p=1;
	while(n!=0) {
		r=n%b2;
		n=n/b2;
		nr=nr+r*p;
		p=p*10;
	}
	cout << nr;
}
