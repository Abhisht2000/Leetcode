class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                mp[grid[i][j]]++;
            }
        }
        int m=grid.size();
        vector<int>v;
        int n=m*m;
        int sum=((n*(n+1))/2);
        
        int sum2=0;
        int a;
        for(auto i:mp){
            sum2+=i.first;
            if(i.second>1){
                v.push_back(i.first);
                a=i.first;
                sum2+=a;
            }

        }
        int b=sum-sum2+a;
        v.push_back(b);
        return v;
        
    }
};