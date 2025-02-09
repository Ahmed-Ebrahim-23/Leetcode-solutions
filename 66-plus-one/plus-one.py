class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits.reverse()
        digits[0] = digits[0]+1
        index=0
        for i in digits:
            if i > 9:
                digits[index]=0
                if index!=len(digits)-1:
                    digits[index+1]=digits[index+1]+1
                else:
                    digits.append(1)
            index+=1
        digits.reverse()
        return digits
