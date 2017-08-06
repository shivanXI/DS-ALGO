from collections import Counter

def main():
	n = int(raw_input())
	l = map(int, raw_input().split())
	s = []
	for i in xrange(n):
		current_sum = 0;
		x = str(l[i])
		for j in xrange(n):
			current_sum += int(x[j])
		s.append(current_sum^l[i])
		