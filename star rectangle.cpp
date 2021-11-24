#include <iostream>
using namespace std;

int main() {
	
	int row,col;
	cout<<"enter num of rows :\n";
	cin>>row;
	cout<<"enter num of col :\n";
    cin>>col;
    
	for(int i=1;i<=row;i++){
	  for(int j=1;j<=col;j++){
	  cout<<"*";
       }
       cout<<endl;
   }
   return 0;
}
