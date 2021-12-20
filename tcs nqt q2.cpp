#include <iostream>
using namespace std;

int main() {
string arr[]={"break","case","continue","default","else","for","func","goto","if","map","range","return","struct","type"};
string word;
cin >> word;
int temp=1;
for(int i=0;i<14;i++)
{
    if (word == arr[i])
    {
        temp=0;
    }
}
if (temp == 0)
{
    cout<<word<<" is a keyword"<<endl;
}
else
{
    cout<<word<<" is not a keyword"<<endl;
}

	return 0;
}
