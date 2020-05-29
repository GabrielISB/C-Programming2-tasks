A = [[4,6,9],  
       [4,5,6],  
       [2,1,5]]  
 
B = [[7,11,2],  
      [1,14,20],  
      [5,7,18]]  
 
result = [[0,0,0],  
               [0,0,0],  
              [0,0,0]]  
 
# iterate through rows of X  
for i in range(len(A)):  
   for j in range(len(B[0])):  
       for k in range(len(B)):  
           result[i][j] += A[i][k] * B[k][j]  
for r in result:  
   print(r)  
