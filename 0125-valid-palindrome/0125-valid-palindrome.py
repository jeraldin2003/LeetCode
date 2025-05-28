class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        string = ""
        x = s.lower()
        length = len(x)
        for i in range(0,length):
            if (ord(x[i]) <= 122 and ord(x[i])>=97) or x[i].isdigit():
                string = string + x[i]
        
        l = len(string)
        j = l
        for i in range(0,l/2):
            j-=1
            if string[i] == string[j]:
                continue
            else:
                return False
        return True