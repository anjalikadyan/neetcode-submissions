import math
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        n=len(points)
        arr=[0]*n
        for i in range(n):
            d=math.sqrt((points[i][0])**2 + (points[i][1])**2)
            arr[i]=d
        s=[]
        for j in range(k):
            a=0
            b=arr[0]
            for i in range(1,len(arr)):
                if arr[i]<b:
                    b=arr[i]
                    a=i
            s.append(points[a])
            del points[a]
            del arr[a]
        return s