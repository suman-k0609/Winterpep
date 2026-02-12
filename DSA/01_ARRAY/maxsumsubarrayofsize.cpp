class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
       
        int csum=0;
        for(int i=0;i<k;i++){
          
                csum+=arr[i];
            }
        int maxsum=csum;
        for(int i=k;i<n;i++){
       csum=csum-arr[i-k]+arr[i];
            if(csum>maxsum){
                maxsum=csum;
            }
        }
        return maxsum;
        
    }
};