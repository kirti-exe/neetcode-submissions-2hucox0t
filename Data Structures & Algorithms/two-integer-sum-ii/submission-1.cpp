class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int l = 0, r = n-1;
        while(r > l){
            if(numbers[l] + numbers[r] > target){
                r--;
            } else if (numbers[l] + numbers[r] < target){
                l++;
            } else {
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
        }
        return ans;
    }
};
