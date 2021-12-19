#include <iostream>
using namespace std;

int main() {
	int sum=0,n,len;
	cin>>n>>len;
	for(int i=0;i<len;i++){
	    sum +=n;
	    n--;
	}
	cout<<sum;
	return 0;
}
