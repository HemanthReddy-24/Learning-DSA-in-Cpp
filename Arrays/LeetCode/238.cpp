class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);
    int left = 1;
    int right = 1;

    for (int i = 0; i < n; ++i) {
        result[i] = left;
        left *= nums[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        result[i] *= right;
        right *= nums[i];
    }

    return result;
}
};



// if not given complexity o(n2)


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s=nums.size();
        vector<int> v(s,1);
        int idx=0;
        while(idx!=s){
            for(int i=0;i<s;i++){
                if(i == idx){
                    continue;
                }
                v[idx]*=nums[i];
            }
            idx++;
        }
        return v;
    }
};
