class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt=0, cnt2=0;
        for(int i = 0 ; i < s.size()/2 ;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                cnt++;
            }
        }
        
        
        for(int i = s.size()/2 ; i < s.size() ;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                cnt2++;
            }
        }
        
        if(cnt==cnt2){
            return true;
        }
        else return false;
        
    }
};
