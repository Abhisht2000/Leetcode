class Solution {
public:
    long long countCommas(long long n) {
        
        long long i=n;
        long long count=0;
        long long initial=1000;
        while(n>=initial){
            count+=(n-initial)+1;
            initial*=1000;
        }
        return count;
    }
};