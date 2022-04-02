class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        sindex = 0;
        tindex = 0;
        
        while(sindex < len(s) and tindex < len(t)):
            
            if t[tindex] == s[sindex]:
                sindex +=1;
                tindex +=1;
            else:
                tindex +=1
        
        if sindex == len(s):
            return True
        else:
            return False;