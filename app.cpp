#include <iostream>
#include <limits.h>
using namespace std;
string reverseString (string str )
{
  string x;
  for(int i=str.length();i>=0;i--){
    
    x+=str[i];
  }
  return x;

}
int main()
{
cout<<reverseString("srawedoc");
return 1;
} 
// search iostream