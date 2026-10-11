class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        
        int num=0;
        int i=0;
        int j=n-1;

        while(i<=j){
            int sum=people[i]+people[j];
            if(sum<=limit){
                num++;
                
                i++;
                j--;
            }
            else{
                num++;
                j--;
            }
            // else{

            // }
        }
        return num;
    }
};