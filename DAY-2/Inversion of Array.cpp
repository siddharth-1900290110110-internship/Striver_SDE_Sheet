class Solution{

int count_iny(int arr[],int temp[],int left,int mid,int right)
{
    int inv_count=0;
  
    int i = left;
  
    int j = mid;
    int k = left;
  
    while((i <= mid-1) && (j <= right)){
      
        if(arr[i] <= arr[j]){
          
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
          
            inv_count = inv_count + (mid - i);
        }
    }

    while(i <= mid - 1)
      
        temp[k++] = arr[i++];

    while(j <= right)
      
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return inv_count;
}
  
};
