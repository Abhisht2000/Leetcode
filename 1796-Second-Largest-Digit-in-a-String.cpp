class Solution {
public:
    int secondHighest(string s) {
        int largest=INT_MIN;
        int sLargest=INT_MIN;
        for(int j=0;j<s.length();j++){
            if (isdigit(s[j])){
                int num = s[j]-'0';
                if(largest==num || sLargest==num) continue;
                if(num>largest){
                    sLargest=largest;
                    largest=num;
                }
                else if(largest>num && sLargest<num){
                    sLargest=num;
                }
            }
        }
        if(sLargest==INT_MIN){
            return -1;
        }
        else{
            return sLargest;
        }
    }
};