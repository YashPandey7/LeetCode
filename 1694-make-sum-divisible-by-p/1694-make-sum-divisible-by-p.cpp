class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
    long long total_sum = 0;
    for (int num : nums) {
        total_sum += num;
    }

    // If the total sum is already divisible by p, no subarray is needed
    int remainder = total_sum % p;
    if (remainder == 0) {
        return 0;
    }

    // Hash map to store the prefix sum modulo and its index
    unordered_map<int, int> mp;
    mp[0] = -1;  // Initialize to handle the case where the prefix sum itself is divisible by p

    int prefix_sum = 0;
    int min_len = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        prefix_sum = (prefix_sum + nums[i]) % p;

        // Find the required prefix sum to remove
        int target = (prefix_sum - remainder + p) % p;

        // If found, calculate the length of the subarray
        if (mp.find(target) != mp.end()) {
            min_len = min(min_len, i - mp[target]);
        }

        // Store the current prefix sum modulo and index
        mp[prefix_sum] = i;
    }

    // If min_len is still the size of the array, it means no valid subarray was found
    return (min_len == nums.size()) ? -1 : min_len;
}
};