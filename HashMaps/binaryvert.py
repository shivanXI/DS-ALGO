class node:
	def __init__(self, key):
		self.key =key;
		self.left = None
		self.right = None

def getVerticalOrder(root, hd, m):
		if root is None:
			return

		try:
			m[hd].append(root.key)
		except:
			m[hd] = [root.key]

		getVerticalOrder(root.left, hd-1, m)
		getVerticalOrder(root.right, hd+1, m)

def printVerticalOrder(root):
		m = dict()
		hd = 0
		getVerticalOrder(root, hd, m)

		for index, value in enumerate(sorted(m)):
			for i in m[value]:
				print i,
			


printVerticalOrder(root)