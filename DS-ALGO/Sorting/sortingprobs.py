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
