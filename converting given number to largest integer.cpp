#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    
    string s ="49939198319";
    
    //converting random number into largest integer
    
    sort(s.begin(),s.end(),greater<int>());
    
    cout<<s<<endl;
	
	return 0;
}
