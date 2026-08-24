class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int j=0;j<=n;j++){
            int c=0;
            int i=j;
        while(i!=0){
            if(i&1){
            c++;
            }
            i=i>>1;
        }
        ans.push_back(c);
        }
     
        return ans;
    }
};