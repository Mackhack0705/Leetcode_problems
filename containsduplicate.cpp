#include<bits/stdc++.h>
using namespace std;

    // int freq(vector<int> &nums, int element) {
    //     int n = nums.size();
    //     int cnt = 0;
    //     for(int i = 0; i < n; i++) {
    //         if(element == nums[i]) cnt++;
    //     }
    //     return cnt;
    // }
    // bool containsDuplicate(vector<int>& nums) {
    //     for(int i = 0; i < nums.size(); i++) {
    //         if(freq(nums, nums[i]) == 2) return true;
    //     }
    //     return false;
    // }
    // bool containsDuplicate(vector<int>& nums) {
    //     int n = nums.size();
    //     sort(nums.begin(), nums.end());
    //     for(int i = 0; i < n; i++) {
    //         if(nums[i] == nums[i+1]) return true;
    //     }
    //     return false;
    // }
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for(int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        for(int i = 0; i < n; i++) {
            if(mpp[nums[i]] == 2) return true;
        }
        return false;
    }

int main() {
    int n, val; 
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }
    cout << containsDuplicate(nums);
    return 0;
}