#include<bits/stdc++.h>
using namespace std;
class Solution{ 
    public:
    int solve(vector<int> &A, int B) {
      
    long long c=0;
    for(int i=0;i<A.size();i++){
      
      
        int current_xor = 0;
      
        for(int j=i;j<A.size();j++){
            current_xor^=A[j];
          
            if(current_xor==B) c++;
        }
    }
    return c;
}
};

int main()
  
{   vector<int> A;
    int n;
 
 cin>>n;
 
 for(int i=0;i<n;i++){
   
 cin>>A[i];}
    int totalCount= obj.solve(A,6);
    cout<<"The total number of subarrays having a given XOR k is "<<totalCount<<endl;
}
