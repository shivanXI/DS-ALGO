import math



#1
def CheckDuplicateNegationTechnique(A):
	A.sort()
	for i in range(0, len(A)):
		if(A[abs(A[i])] < 0):
			print ("Duplicates", A[i])
			return
		else:
			A[A[i]] = -A[A[i]]
	print ("No duplicates")
