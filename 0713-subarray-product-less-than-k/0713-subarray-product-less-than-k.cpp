class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n= nums.size();
        int ans =0;
        int i=0;
        int j=0;
        long long product =1;
        if(k<=1){
            return 0;
        }
        while(j<n){
            product*=nums[j];

            while(i<=j&&product>=k){
                product/=nums[i];
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};