class Solution {
public:

    bool ugly(int n){
        while(n%2==0){
            n/=2;
        }
        while(n%3==0){
            n/=3;
        }
        while(n%5==0){
            n/=5;
        }
        return n==1;
    }

    int nthUglyNumber(int n) {
        if(n<1){
            return 0;
        }

        int count=0;
        int i=1;
        while(count<n){
        if(ugly(i++)){
            count++;
        }
        }
        return i-1;
    }
};