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
		if self.end <= len(self.str)-1:
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
