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
		dummy = ListNode(0)
		list_o  = dummy
		pointer1 = 0
		pointer2 = 0
		while pointer1 < sizeList1 and pointer2 < sizeList2:
			if list1.data < list2.data:
				list_o.next = list1
				list1 = list1.next
				pointer1 += 1
			else:
				list_o.next = list2
				list2 = list2.next
				pointer2 += 1
			list_o = list_o.next
		while pointer1 < sizeList1:
				list_o.next = list1
				list1 = list1.next
				pointer1 += 1
				list_o = list_o.next
		while pointer2 < sizeList2:
				list_o.next = list2
				list2 = list2.next
				pointer2 += 1
				list_o = list_o.next
		list_o.next = None
		return dummy.next

#5
class ListNode:
	def __init__(self, x):
		self.data = x
		self.next = None
def Qsort(first, last):
	lesHead = lesTail  = None
	equHead = equTail = None
	larHead = larTail = None
	current = first
	if(current == None):
		return
	pivot  = current.data
	Append(current, equHead, equTail)
	while(current != None):
		info = current.data
		if(info < pivot):
			Append(current, lesHead, lesTail)
		elif(info > pivot):
			Append(current, larHead, larTail)
		else:
			Append(current, equHead, equTail)
	Quicksort(lesHead, lesTail)
	Quicksort(larHead, larTail)
	Join(lesHead,lesTail, equHead, equTail)
	Join(equHead, equTail, larHead, larTail)
	first = lesHead
	last = larTail
