class Solution {
public:
    string sortSentence(string s) {
        
        char a[1000];
        string word;
        vector<string> substr(10);
        for(int i = 0 ; i < s.size();i++){
            if(isdigit(s[i])){
                substr[s[i]-48] = word+" ";
                i++;
                word="";
            }
            else{
                word+=s[i];
         
               }
               
     }
        string ans; 
        
        for(auto i:substr){
            ans= ans+i;
        }
         ans.pop_back();     
       return ans;        
    }
};
