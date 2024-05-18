class Solution(object):
    def romanToInt(self, s):
        o = 0
        s = s + "OOO"
        if s[0] == 'M':
            o += 1000
            if s[1] == 'M':
                o += 1000
                if s[2] == 'M':
                    o += 1000
            s = s.strip('M')
        
        if s[0] == 'D':
            o += 500
            if s[1] == 'D':
                o += 500
                if s[2] == 'D':
                    o += 500
            s = s.strip('D')
        
        if s[0] == 'C':
            o += 100
            if s[1] == 'D':
               o += 300  
            elif s[1] == 'M':
               o += 800  
            elif s[1] == 'C':
                o += 100
                if s[2] == 'C':
                    o += 100
            s = s.strip('CDM')
        
        if s[0] == 'L':
            o += 50
            if s[1] == 'L':
                o += 50
                if s[2] == 'L':
                    o += 50
            s = s.strip('L')
        
        if s[0] == 'X':
            o += 10
            if s[1] == 'L':
                o += 30
            if s[1] == 'C':
                o += 80
            if s[1] == 'X':
                o += 10
                if s[2] == 'X':
                    o += 10
            s = s.strip("XLC")
        
        if s[0] == 'V':
            o += 5
            if s[1] == 'V':
                o += 5
                if s[2] == 'V':
                    o += 5
            s = s.strip('V')
        
        if s[0] == 'I':
            o += 1
            if s[1] == 'V':
                o += 3
            if s[1] == 'X':
                o += 8
            if s[1] == 'I':
                o += 1
                if s[2] == 'I':
                    o += 1
            s = s.strip("ILC")
        return o
Solution = Solution()
print(Solution.romanToInt("III"))
print(Solution.romanToInt("LVIII"))
print(Solution.romanToInt("MCMXCIV"))