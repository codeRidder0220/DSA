#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>>ans;

        int n = nums.size();

        int t = 1<<n;

        for(int s = 0;s<t;s++){
            vector<int>ds;
            for(int i=0;i<n;i++){
                if(s&(1<<i)){
                    ds.push_back(nums[i]);
                }
            }
            ans.push_back(ds);
        }
        return ans;
        
    }
};

int main(){

    //doing this question by but manipulation , we can also go through by recursion but i do with bit manipulation..
    //time complexity=> O(n * 2^n)


    return 0;
}