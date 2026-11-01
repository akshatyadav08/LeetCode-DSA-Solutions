class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n =values.size();
        int i=0;
        int ans=0;
        int x=values[i]+i;
        for(int j=1;j<n;j++){
            ans=max(ans,x+values[j]-j);
            x=max(x,values[j]+j);

        }
        return ans;
        
    }
};