class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:

    
        top,bottom=0,len(matrix)-1
        while top<=bottom:
            midrow=(top+bottom)//2
            if target<matrix[midrow][0]:
                bottom=midrow-1
            elif target>matrix[midrow][-1]:
                top=midrow+1
            else:
                break
        
        if not (top<=bottom):
            return False
        midrow=(top+bottom)//2
        left=0
        right=len(matrix[0])-1
        while left<=right:
            mid=(left+right)//2
            if target<matrix[midrow][mid]:
                right=mid-1
            elif target>matrix[midrow][mid]:
                left=mid+1
            else:
                return True
        return False




