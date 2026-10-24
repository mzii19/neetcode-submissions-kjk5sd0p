class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        result=[0]*len(temperatures)
        day=[]
        for i,temp in enumerate(temperatures):
            while day and temp>temperatures[day[-1]]:
                j=day.pop()
                result[j]=i-j
            day.append(i)
        return result