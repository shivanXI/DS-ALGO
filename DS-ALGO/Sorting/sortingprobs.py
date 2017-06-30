#Kurumanchi

#1
def CheckDuplicatesBrute(A):
	A.sort() #Heapsort
	for i in range(0, len(A)):
		for j in range(i+1, len(A)):
			if(A[i] == A[j]):
				print("DExists", A[i])
				return;
	print("No Dexists")

#2
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


#3
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


#4
class ListNode:
	def __init__(self, x):
			self.data = x
			self.next  = None
class LinkedListSortWithMergeSort:
	def sortList(self, head):
		if head == None:
			return None
		counter = 0
		temp = head
		while temp != None:
			temp = temp.next
			counter += 1
		return self.sort(head, counter)
	def sort(self,head, size):
		if size ==1:
			return head
		list2 = head
		for i in range(0, size//2):
			list2 = list2.next
		list1 = self.sort(head, size//2)
		list2 = self.sort(list2, size-size//2)
		return self.merge(list1, size//2, list2, size-size//2)
	def merge(self,list1, sizeList1, list2, sizeList2):
		