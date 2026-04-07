#include <iostream>
#include <string>
using namespace std;

int i=0;

int main(){
      std::string s; 
          getline(cin, s);  // read full line

   
    while (i<s.length()) {
        if(s[i]=='\\'){
            break;
            }
            cout<<s[i];
        i++;
    }

}