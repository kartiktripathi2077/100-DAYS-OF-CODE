#include<iostream>
#include<string.h>

using namespace std;

int main(){
  
  char str[100];
  int i,vowels=0;
  
  cout<<"enter the string : "<<endl;
  cin>>str;
  
  for(i=0;str[i];i++)
  {
	if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
	{
	  vowels++;
	}
  }

  cout<<"number of vowels present in string : "<<vowels<<endl;
  
  return 0;
}