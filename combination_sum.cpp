#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void comb(int ind, vector<int>& candi, int target,
              vector<vector<int>>& ans, vector<int>& ds) {

        // Base Case:
        if (ind == candi.size()) {
            if (target == 0) {
                ans.push_back(ds);  // Agar target exactly 0 ban gaya to current combination answer me store kar do
            }
            return;
        }

        //pick an element=>
        if (candi[ind] <= target) {    // Agar current element target se chhota ya equal hai , tabhi use pick kar sakte hain

            ds.push_back(candi[ind]);  // Current element ko combination me add kar do
            comb(ind, candi, target - candi[ind], ans, ds);

            ds.pop_back(); // Backtracking => Jo element add kiya tha use hata do taki next choice try kar sake
        } 

        //not pick an element =>
        comb(ind + 1, candi, target, ans, ds);     // Current element ko skip kar do aur next index par chale jao

    }

    vector<vector<int>> combinationSum(vector<int>& candi, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        comb(0, candi, target, ans, ds);
        return ans;
    }
};


int main(){
    
    return 0;
}