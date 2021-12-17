#include <iostream>
using namespace std;

int main() {
	
	string str = "AHASHISAA";
	
	
	//converts into Lower Case
	
	for(int i=0; i<str.size(); i++)
	{
	    if(str[i]>='A' && str[i]<='Z')
	    str[i] +=32; //this value is of the above code
	}
	cout<<str;
	
	return 0;
}
