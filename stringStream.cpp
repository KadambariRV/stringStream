#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
 vector<int> x;
 stringstream sso;
 sso<<str;
 int A;
 char ch;
 while(sso>>A)
 {
     x.push_back(A);
     sso>>ch;
 }
 return x;
}

int main() 
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
