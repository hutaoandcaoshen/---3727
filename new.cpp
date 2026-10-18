
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        //判断是否为偶数
        if(nums.size()%2!=0)
        {
            nums.push_back(0);
        }

        //获取乘方并且排序
        for(auto &a:nums)//在自己内部实现乘方
        {
            a*=a;
        }
        std::ranges::nth_element(nums,nums.begin()+nums.size()/2);//只需要前m个比后面小就行，无需严格排序

        //大-小
        //小的

        //#include<numeric>
        //用函数更快
        return 
               accumulate(nums.begin()+nums.size()/2,nums.end(),0LL)-
               accumulate(nums.begin(),nums.begin()+nums.size()/2,0LL);
    }
};