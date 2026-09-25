class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
             vector<int> ans;
            int n = nums.size();
            vector<bool> isPresent(n+1, false);//we are checking through and on duplicate it initailize true
        for(int i=0; i<n; i++) {//in loop 1 we are checking for duplicate, if there then push it into ans.
          if(isPresent[nums[i]]) {
            ans.push_back(nums[i]);
           }
          isPresent[nums[i]] = true;
        }
        for(int i=1; i<isPresent.size(); i++) {// in loop 2 we going on every index and if its not present the push it to ans.
          if(!isPresent[i]) {
          ans.push_back(i);
          break;
         }
        }
        return ans;   
    }
};