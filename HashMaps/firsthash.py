t = int(raw_input())
s = "abcdefghijklmnopqrstuvwxyz123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

assert (t > 0 and t < 51)
while t > 0:
	t = t - 1
	strs = raw_input().split()
	n = len(strs)
	assert (n > 0 and n < 21)
	hsh = 0
	for i in strs:
		assert (len(i)>0 and len(i)<31)
		for j in xrange(len(i)):
			hsh = hsh + (j + s.index(i[j]))

	print hsh * n 
