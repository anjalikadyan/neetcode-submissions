class Solution {
public:
    bool isAnagram(string s, string t) {
        int a=s.length();
        int b=t.length();
        if(a!=b){
            return false;
        }
        int count=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(s[i]==t[j]){
                    count+=1;
                    t.replace(j,1,"");
                    break;
                }
            }
        }
        if(count==a){
            return true;
        }
        return false;
    }
};
