class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        vector<int>ans;
        int flag=0;
        for(auto &pair:mp){
            int i=target-pair.first;
            auto it=mp.find(i);
            if(pair.first==i) flag=1;
            if(it!=mp.end()){
                vector<int>::iterator t=find(nums.begin(),nums.end(),pair.first);
                if(t!=nums.end()){
                int n=distance(nums.begin(),t);
                if(flag==1){
                    nums[n]=1e9;
                } 
                vector<int>::iterator s=find(nums.begin(),nums.end(),i);
                if(s!=nums.end()){
                int m=distance(nums.begin(),s);
                ans.push_back(n);
                ans.push_back(m);
                return ans;
                if(flag==1){
                    nums[n]=pair.first;
                    flag=0;
                }}}
            }
        }
        return ans;
    }
};