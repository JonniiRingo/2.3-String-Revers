#include <iostream> 
using namespace std;

int main()
{

int scope;
string string1, reverseSTRNG;
cout << "Please enter a string. " << endl;
cin >> string1;

scope = string1.length();

for(int i = scope; i>= 0; i-- )
{
    reverseSTRNG += string1.substr(i,1);
}
 cout << reverseSTRNG;

    return 0;
}