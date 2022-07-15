class Solution {
public:
vector<vector> generate(int numRows) {

    vector<int> v;
  
    vector<int> vv;
    vector<vector<int>> ans;
  
    
    v.push_back(1);
    ans.push_back(v);
  
    v.push_back(1);
    
    if(numRows == 1){
        return ans;
      
    }
    
    ans.push_back(v);
    if(numRows == 2){
        return ans;
    }
    
    int i = numRows-2;
    while(i){
        vv.push_back(1);
      
        for(int i=0;i<v.size()-1;i++){
          
            int sum = v[i]+v[i+1];
          
            vv.push_back(sum);
        }
        vv.push_back(1);
      
        ans.push_back(vv);
      
        v=vv;
        vv.clear();
        i--;
    }
    
    return ans;
    
    
    
    
    
}
};
