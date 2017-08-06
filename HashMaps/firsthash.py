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

##############################################
initial_check = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ"
for _ in range(input()):
    strs_t = raw_input().split()
    hsh = 0
    for i in range(len(strs_t)):
        for j in range(0,len(strs_t[i])):
            hsh += j + initial_check.index(strs_t[i][j])
    print len(strs_t) * hsh