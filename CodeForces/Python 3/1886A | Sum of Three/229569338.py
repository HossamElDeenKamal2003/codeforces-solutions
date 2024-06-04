class clsSolve:
    def SetT(self):
        self._t = int(input())
 
    def GetT(self):
        return self._t
 
    def SetN(self):
        self._n = int(input())
 
    def GetN(self):
        return self._n
 
    def solve(self):
        self.SetT()
        t = self.GetT()
 
        while t > 0:
            self.SetN()
            num = self.GetN()
 
            if num <= 6 or num == 9:
                print("NO")
            elif num % 3:
                print("YES")
                print(1, 2, num - 3)
            else:
                print("YES")
                print(1, 4, num - 5)
 
            t -= 1
 
 
solve = clsSolve()
solve.solve()