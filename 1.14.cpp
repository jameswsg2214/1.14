#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    char s;
    int calc()
{
if((s>='a' && s<='z')||(s>='A' && s<='Z'))
cout<<s<<" Alphabet";
else
cout<<" No";
}
};
int main()
{
  sample s;
  
  cout << "Enter a character: ";
  cin>>s.s;
  s.calc();
}