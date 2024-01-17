#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum == k) {
                    c++;
                    break;
                }
                if (sum > k)
                    break;
            }
        }
        return c;
    }
};


