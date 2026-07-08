class Solution {
public:

    string encode(vector<string>& strs) {
        string a="";
        for(string i:strs){
            int n=i.size();
            a+=to_string(n);
            a+='#';
            a+=i;
        }
        return a;
    }

    vector<string> decode(string s) {
        vector<string> a1;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int len=stoi(s.substr(i,j-i));
            a1.push_back(s.substr(j+1,len));
            i=j+1+len;
        }
        
        return a1;
    }
};
