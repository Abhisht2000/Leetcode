class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans=-1;
        int n=words.size();
        for(int i=0;i<words.size();i++) {
            if(words[i]==target){
                int dis=min({(i-startIndex+n)%n,(startIndex-i+n)%n});
            
            if(ans==-1){
                ans=dis;
            }
            else{
                ans=min(ans,dis);
            }
            }
        }
        return (ans);
    }
};