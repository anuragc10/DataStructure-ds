#include <iostream>
using namespace std;

bool isPalindrome(string x) {
    //complete the function
    string s="";
    for(int i=x.length()-1;i>=0;i--)
    {
        s=s+x[i];
    }
    if(s==x){
        return true;
    }
    else{
        return false;
    }

    
}

int main() {
    string n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
