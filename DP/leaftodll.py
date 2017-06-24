class Node:
	def __init__(self, data):
		self.data = data
		self.left = None
		self.right = None

def removeLeafList(root):
	if root is None:
		return None
	if root.left is None and root.right is None:
		root.right = removeLeafList.head

		if removeLeafList.head is not None:
			removeLeafList.head.left = root
		removeLeafList.head = root

		return None
	root.right = removeLeafList(root.right)
	root.left = removeLeafList(root.left)

	return root

def printList(head):
	while(head):
		if head.data is not None:
			print head.data
		head = head.right

removeLeafList.head = Node(none);

root = removeLeafList(root)

printList(removeLeafList.head)

