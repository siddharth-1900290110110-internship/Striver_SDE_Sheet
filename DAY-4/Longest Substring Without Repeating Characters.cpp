class Solution {
public:
int lengthOfLongestSubstring(string s) {

    map<char,int> m;
  
    int maxlen=INT_MIN;
    int curr_len=0;             
  
    int curr_start=0;

    
    for(int i=0; i<s.size(); i++){
      
        if(m.find(s[i])!=m.end() && m[s[i]]!=-1){
            int store_curr_start=curr_start;    
          
            curr_start=m[s[i]]+1;
          
            curr_len=i-m[s[i]];
          
            for(int j=store_curr_start; j<=m[s[i]]; j++){
              
                m[s[j]]=-1;
            }
            m[s[i]]=i;
          
            continue;
        }
        m[s[i]]=i;
      
        curr_len++;
        maxlen=max(maxlen,curr_len);
    }
    maxlen=max(maxlen,curr_len);   
    return maxlen;
}
