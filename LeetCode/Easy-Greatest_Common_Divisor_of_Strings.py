class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        temp = min(str1, str2)
        str1 = max(str1, str2)
        str2 = temp
        l1 = len(str1)
        l2 = len(str2)
        base = str2
        
        for i in range (0, len(base)):
            if l1%len(base) == 0:
                interval = l1/len(base)
                count = 0
                for i in range(0, interval):
                    start = i*(len(base))
                    end = ((i+1)*(len(base)))
                    if base == str1[start:end]:
                        if str1[start:end] == str2[start:end] or start >= l2:
                            count+=1
                    
                if count == interval and l2%len(base) == 0:
                    return base
            base = base[0:len(base)-1]
        return ""        


'''
Algorithm

Find the shorter string among str1 and str2, without loss of generality, let it be str1.

Start with base = str1, and check if both str1 and str2 are made of multiples of base.

If so, return base.
Otherwise, we shall try a shorter string by removing the last character from base.
If we have checked all prefix strings without finding the GCD string, return "".
'''

('str1', u'TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX')
('str2', u'TAUXXTAUXXTAUXXTAUXXTAUXX')
('base', u'TAUXXTAUXXTAUXX')



class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
 
    
        if str1 + str2 != str2 + str1:
            return ""

        
        def gcd(a, b):
            while b:
                a, b = b, a % b
            return a

    
        gcd_len = gcd(len(str1), len(str2))

    
        return str1[:gcd_len]
    