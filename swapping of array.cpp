#include<iostream>
using namespace std;

int main(){
  int a1[30],a2[30],num,temp;
  cout<<"number of elements to be stored : "<<endl;
  cin>>num;
  cout<<"enter elements of array a1 : "<<endl;
  for(int i=0;i<num;i++)
	cin>>a1[i];
  cout<<"enter elements of array a2 : "<<endl;
  for(int i=0;i<num;i++)
	cin>>a2[i];
  for(int i=0;i<num;i++)
  {
	temp=a1[i];
	a1[i]=a2[i];
	a2[i]=temp;
  }
  cout<<"after swapping"<<endl;
  cout<<"a1 : ";
  for(int i=0;i<num;i++)
	cout<<a1[i]<<" ";
  cout<<endl<<"a2 : ";
  for(int i=0;i<num;i++)
	cout<<a2[i]<<" ";
  return 0;
}
  