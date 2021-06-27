class Solution: #A class is a code template for creating objects.
    def generate(self, numRows: int) -> List[List[int]]: #Generator functions allow you to declare a function that behaves like an iterator. They allow programmers to make an iterator in a fast, easy, and clean way.
        res = [[1],[1,1]]
        if numRows==1:
            return [[1]]
        elif numRows==2:
            return res
        
        c = 2
        l=[]
        while(c<numRows):
            l=[]
            l.append(1)
            for i in range(0,len(res[-1])-1):
                l.append(res[-1][i]+res[-1][i+1])
                
            l.append(1)
            res.append(l[:])
            c+=1
        return res