# without stack and without recursion inorder traversal

class Node :
	def __init__(self, data):
		self.data = data
		self.left = None
		self.right = None

def MorrisTraversal(root):
	current  =  root
	while(current is not None):
		if current.left is None:
			print current.data ,
			current = current.right
		else:
			#inorder predecessor will do the job
			pre = current.left
			while(pre.right is not None and pre.right != current):
				pre = pre.right
			
			if(pre.right is None):
				pre.right = current
				current = current.left
			else:
				pre.right = None
				print current.data ,
				current = current.right

root = 	Node(1)

MorrisTraversal(root)