class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> v;

        for(int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < v.size() - 1; i++) {
            int num1 = v[i].first;
            int index1 = v[i].second;

            int num2 = v[i + 1].first;
            int index2 = v[i + 1].second;

            if(num1 == num2 && abs(index1 - index2) <= k)
                return true;
        }

        return false;
    }
};