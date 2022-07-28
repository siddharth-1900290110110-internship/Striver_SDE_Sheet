

 class Solution {
 int solve(int[] a){
	int  max = 0;
   
	for(int i = 0; i < a.length; ++i){
		int sum = 0;
    
		for(int j = i; j < a.length; ++j){
      
			sum += a[j];
			if(sum == 0){
        
				max = max(max, j-i+1);
			}
		}
	}
	return max;
   }

     void main() 
    { 
        int a[] = {9, -3, 3, -1, 6, -5};
        cout<<(solve(a));
    } 
}
