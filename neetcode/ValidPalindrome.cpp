#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        int z=s.size()-1/2;

        while(i<z){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }else{
                    return false;
                }
        }
        return true;
    }
};

int main(){
	 Solution sol;
    	bool res = sol.isPalindrome("redaade");
    	cout << boolalpha << res << endl;
    	return 0;
}
