class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        //判断是否为偶数
        if(nums.size()%2!=0)
        {
            nums.push_back(0);
        }

        //获取乘方并且排序
        vector<long long> chen(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            chen[i]=(long long)pow(nums[i],2);
        }
        sort(chen.begin(),chen.end());

        //大-小
        //小的
        long long slow=0;
        for(int i=0;i<=(int)nums.size()/2-1;i++)
        {
            slow+=chen[i];
        }
        long long big=0;
        for(int i=(int)nums.size()/2;i<nums.size();i++)
        {
            big+=chen[i];
        }

        return big-slow;
    }
};