class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = 0;

        for(int i = 0 ; i< accounts.size(); i++){
            int sum=0;
            for(int j = 0; j< accounts[i].size(); j++){
                sum+= accounts[i][j];
            }
            result = max(result, sum);
        }
        return result;
        

    }
};