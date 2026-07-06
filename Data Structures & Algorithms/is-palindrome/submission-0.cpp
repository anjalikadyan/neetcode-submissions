class Solution {
public:
    bool isPalindrome(string s) {
        string b="";
        for(char a:s){
            if(a>='a' && a<='z' || a>='A' && a<='Z' || a>='0' && a<='9'){
                b+=tolower(a);
            }
        }
        s=b;
        std::reverse(b.begin(),b.end());
        std::cout<<b<<" "<<s;
        if(b==s){
            return true;
        }
        return false;

    }
};
