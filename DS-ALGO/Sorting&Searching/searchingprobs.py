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

#2
def MaxRepititionWithHash(A):
	table = {}
	max = 0
	for element in A:
		if element in table:
			table[element] += 1
		elif element != " ":
			table[element] = 1
		else:
			table[element] = 0
	for element in A:
		if table[element] > max:
			max  =  table[element]
			maxRepeatedElementi = element
	print maxRepeatedElementi, max, "times"