class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        li = sentence.split(" ")
        
        length = len(li)
        lastWord = li[length-1][-1]
        
        for w in range(length):
            if li[w][0] != lastWord:
                return False
            lastWord = li[w][-1]
            
        return True 
        