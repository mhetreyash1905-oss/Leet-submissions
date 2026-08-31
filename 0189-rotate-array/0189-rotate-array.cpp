class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        int arr[n];
        for(int i = 0 ; i < k ; i++){
            arr[i] = nums[n-k+i];
        }
        for(int i = k ; i<n ;i++ ){
            arr[i] = nums[i-k];
        }

        for(int i = 0 ; i <n ; i++){
            nums[i] = arr[i];
        }
    }
};