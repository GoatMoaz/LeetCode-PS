class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
         int left = 1;
        int right = *max_element(nums.begin(), nums.end()); 
      
        while (left < right) {
            int mid = left + (right - left) / 2; 
            long long operationCount = 0; 
          
            for (int num : nums) {
                operationCount += (num - 1) / mid;
            }
          
            if (operationCount <= maxOperations) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
    
        return left;
    }
};