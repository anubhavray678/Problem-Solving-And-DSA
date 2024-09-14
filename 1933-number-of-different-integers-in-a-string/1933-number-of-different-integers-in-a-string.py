class Solution:
    def numDifferentIntegers(self, word: str) -> int:
        count = set()
        num = ""
        for i in range(len(word)):
            if word[i].isnumeric():
                num += word[i]
            else:
                if num:
                    count.add(int(num))
                    num =""
        if num:
            count.add(int(num))
        return len(count)

        