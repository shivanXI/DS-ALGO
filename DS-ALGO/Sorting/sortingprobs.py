#Kurumanchi

def CheckDuplicatesBrute(A):
	A.sort() #Heapsort
	for i in range(0, len(A)):
		for j in range(i+1, len(A)):
			if(A[i] == A[j]):
				print("DExists", A[i])
				return;
	print("No Dexists")

