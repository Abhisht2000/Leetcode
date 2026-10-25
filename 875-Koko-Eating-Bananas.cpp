class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        
        while(l<=r){
            int mid=l+((r-l)/2);
            long long k=0;
            for(int x:piles){
                k+=(x+(long long)mid-1)/mid;
            }
            if(k>h){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return l;
    }
};
