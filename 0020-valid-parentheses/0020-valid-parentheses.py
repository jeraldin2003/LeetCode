class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        brac = []
        for strings in s:
            if strings in ("(", "{", "["):
                brac.append(strings)
            elif strings == ")":
                if not brac or brac[-1] != "(":
                    return False
                brac.pop()
            elif strings == "}":
                if not brac or brac[-1] != "{":
                    return False
                brac.pop()
            elif strings == "]":
                if not brac or brac[-1] != "[":
                    return False
                brac.pop()
        if not brac:
            return True
        else:
            return False