class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        int ans=x^y;
        while(ans>0){
            count+=ans&1;
            ans>>=1;
        }
        return count;
    }
};