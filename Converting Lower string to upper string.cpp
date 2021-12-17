#include <iostream>
using namespace std;

int main() {
	
	string str = "adsfsfdasva";
	
	cout<< 'a'-'A'<<endl;
	
	//converts into Upper Case
	
	for(int i=0; i<str.size(); i++)
	{
	    if(str[i]>='a' && str[i]<='z')
	    str[i] -=32; //this value is of the above code
	}
	cout<<str;
	
	return 0;
}
