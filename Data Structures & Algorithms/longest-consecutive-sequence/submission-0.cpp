class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int current = nums[i];
            int count = 1;
            while(true){
                bool found = false;

                for(int j=0; j<n; j++){
                    if(nums[j] == current + 1){
                        current = current + 1;
                        count++;
                        found = true;
                        break;
                    }
                }
                if(!found)  break;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};
