import numpy.empty as np
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        lst=np.empty((len(matrix),len(matrix)),dtype=int)
        y=0
        for x in range(len(matrix)):
            for y in range(len(matrix)):
                lst[x][y]=matrix[len(matrix)-1-y][x]
        for x in range(len(matrix)):
            for y in range(len(matrix)):
                matrix[x][y]=lst[x][y]
        
                
        