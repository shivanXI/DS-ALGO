#Kurumanchi

def CheckDuplicatesBrute(A):
	A.sort() #Heapsort
	for i in range(0, len(A)):
		for j in range(i+1, len(A)):
			if(A[i] == A[j]):
				print("DExists", A[i])
				return;
	print("No Dexists")

def CheckWhoWinsTheElection(A):
	A.sort()
	counter  = maxCounter = 0
	candidate = maxCandidate  = A[0]

	for i in range(0, len(A)):
		if(A[i] == candidate):
			counter += 1
		else:
			counter = 1
			candidate = A[i]

		if(counter > maxCounter):
			maxCandidate = A[i]
			maxCounter = counter
	print maxCandidate, maxCounter


def binarySearch(numberList, value):
	low = 0
	high = len(numberList)-1
	while low <= high:
		mid = (low+high)//2
		if numberList[mid]  > value:
			high  =  mid-1
		elif numberList[mid] < value:
			low = mid+1
		else:
			return mid
	return -1
def FindSumInLists(A,B,k):
	A.sort()
	for i in range(0, len(B)):
		c = k-B[i]
		if(binarySearch(A, c) != -1):
			return 1
	return 0
	