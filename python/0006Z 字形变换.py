class Solution:
    def convert(self,s:str,numRows:int)->int:
        n=len(s)
        result=''
        if(n<=numRows or numRows==1):
            return s
        for k in range(numRows):
            result+=s[k]
            max=2*(numRows-1)-2*k
            min=2*k
            while k<n:
                k+=max
                if max>0 and k<n:
                    result+=s[k]
                k+=min
                if min>0 and k<n:
                    result+=s[k]
        return result

