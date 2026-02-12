class Solution {
public:
    int maxSubArray(vector<int>& nums) {
//         int maxsum=nums[0];
//         int csum=nums[0];
//         for(int i=1;i<nums.size();i++){
// csum=max(nums[i],csum+nums[i]);
// maxsum=max(csum,maxsum);
//kadane's algorithm if cursum<0 reset to 0
int cursum=0;
int maxsum=nums[0];
for(int i=0;i<nums.size();i++){
    cursum+=nums[i];
    if(cursum>maxsum){
        maxsum=cursum;
    }
    if(cursum<0){
        cursum=0;
    }
}     
        return maxsum;
    }
    
};