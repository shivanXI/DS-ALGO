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

#3
def MaxRepititionEfficient(A):
	n = len(A)
	max = 0
	for i in range(0, len(A)):
		A[A[i]%n] += n
	for i in range(0, len(A)):
		if(A[i]/n > max):
			max = A[i]/n
			maxIndex = i
	print max, maxIndex

#4
def FirstRepeatedElementAmongRepeatedElementsHash(A):
	table = {}
	max = 0
	for element in A:
		if element in table and table[element] == 1:
			table[element] = -2
		elif element in table and table[element] < 0:
			table[element] -= 1
		else:
			table[element] = 0
	for element in A:
		if table[element] < max:
			max = table[element]
			maxRepeatedElement = element
	print maxRepeatedElement, abs(max), "times"
