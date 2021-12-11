#include<bits/stdc++.h>
using namespace std;
     
int LongestWordLength(string str)
{
    int counter = 0;
    string words[100];
    for (short i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            counter++;
        else
            words[counter] += str[i];
    }
     
    int length = 0;
     
    for(string word:words)
    {
        if(length < word.length())
        {
            length = word.length();
        }
    }
    return length;
}
 

int main()
{
    string str = "I am an intern at geeksforgeeks";
     
    cout << (LongestWordLength(str));
}
 