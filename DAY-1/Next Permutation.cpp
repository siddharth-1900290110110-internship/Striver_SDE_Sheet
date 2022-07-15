class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      
        int n = nums.size()-1;
        int inflectionPoint=0;
      
        for(int i=n; i>0; i--){
            if(nums[i]>nums[i-1]){
              
                inflectionPoint=i;
              
                break;
            }
        }
        if(inflectionPoint==0){
          
            sort(nums.begin(),nums.end());
        }
        else{               //if we get an inflection point
            int toSwap= nums[inflectionPoint-1];
          
            int min= INT_MAX;
          
            for(int j=inflectionPoint; j<=n; j++){
              
                if(nums[j]-toSwap>0 && nums[j]-toSwap<min){
                  
                    int temp=nums[j];
                  
                    nums[j]=nums[inflectionPoint-1];
                    nums[inflectionPoint-1]=temp;
                }
            }
            sort(nums.begin()+inflectionPoint, nums.end());
        }
    }
};
