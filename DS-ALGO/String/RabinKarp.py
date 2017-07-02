#1
def RabinKarp(text, pattern):
	if pattern == None or text == None:
		return -1
	if pattern == "" or text == "":
		return -1
	if len(pattern) > len(text):
		return -1
	hashText = Hash(text, len(pattern))
	hashPattern = Hash(pattern, len(pattern))
	hashPattern.update()

	for i in range(len(text)-len(pattern)+1):
		if hashText.hashedValue() == hashPattern.hashedValue():
			if hashText.text() == pattern:
				return i
		hashText.update()
	return -1
class Hash:
	def __init__(self, text, size):
		self.str = text
		self.hash = 0
		for i in xrange(0, size):
			self.hash += ord(self.str[i])
		self.init = 0
		self.end = size
	def update(self):
 				self.hash -= ord(self.str[self.init])
				self.hash += ord(self.str[self.end])
				self.init += 1
				self.end += 1
	def hashedValue(self):
		return self.hash
	def text(self):
		return self.str[self.init:self.end]

#2
def prefixTable(pattern):
	m = len(pattern)
	F = [0] * m
	k = 0
	for q in range(1, m):
		while k > 0 and pattern[k] != pattern[q]:
			k = F[k-1]
		if pattern[k] == pattern[q]:
			k = k+1
		F[q] = k
	return F
def KMP(text, pattern):
	n = len(text)
	m = len(pattern)
	F = prefixTable(pattern)	
	q = 0
	for i in range(n):
		while q > 0 and pattern[q] != text[i]:
			q = F[q-1]
		if pattern[q] == text[i]:
			q = q + 1
		if q == m:
			return i - m + 1
	return -1

#3
class TSTNode:
	def __init__(self,x):
		self.data = x
		self.left = None
		self.right  = None
		self.eq = None
class TST:
	def __init__(self, x = None):
		self.root = TSTNode(None)
		self.leaf = x
	def search(self, seq):
		node = self.root
		for x in seq:
			node = _search(node.eq,x)
			if not node: return False
		return _search(node.eq, self.leaf) is not None
	def insert(self, seq):
		node = self.root
		for x in seq:
			child = _search(node.eq, x)
			if not child:
				child = TSTNode(x)
				node.eq = _insert(node.eq, child)
			node = child

