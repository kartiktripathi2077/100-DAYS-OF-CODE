#include<iostream>
using namespace std;

int main()
{
  int year;
  cout<<"enter the  year";
  cin>>year;
  
  if(year % 4 == 0){
	cout<<"it is a leap year";
  }
	else{
	  cout<<"it is not a leap year";
	}
  return 0;
}