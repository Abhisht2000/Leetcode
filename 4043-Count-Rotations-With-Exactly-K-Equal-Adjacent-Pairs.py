class Solution:
    def countRotations(self, s: str, k: int) -> int:
        n=len(s)

        if n==1:
            return 1 if k==0 else 0
        equal=0
        for i in range(n):
            if s[i]==s[(i+1)%n]:
                equal+=1
        if k==equal:
            return n-equal
        if k==equal-1:
            return equal
        return 0