# include <iostream>
# include <string>
using namespace std;
int main()
{
int n,x=0;
cout << "Input an integer number: ";
cin >> n;
      if (n <= 0) {  
            cout <<"Input a correct number.";  
        }
       while (n != 1) 
       {  
            if (n % 5 == 0) 
            {  
                n /= 5;  
            } 
            else if (n % 3 == 0) 
            {  
                n /= 3;  
            } 
            else if (n % 2 == 0) 
            {  
                n /= 2;  
            } 
            else 
            {  
                cout <<"It is not xyz number "<<endl; 
                x = 1;  
                break;  
            }  
        } 
		        if (x==0)
		        { 
                cout <<"It is xyz number "<<endl;
                }
}
