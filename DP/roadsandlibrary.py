from collections import defaultdict
from collections import deque
from math import pi, cos, sin


class Adjcities:
	def __init__(self):
		self.nodes = []
		self.edges = defaultdict(set)

	def clone(self):
		g = Adjcities()
		g.nodes = self.nodes[:]
		for n in self.nodes:
			for e in self.edges[n]:
				g.edges[n].add(e)
		return g

def count_components(g):
	ncomponents = 0;
	visited = set()
	n = len(g.nodes)
	csize = []

	for node in g.nodes:
		if node in visited: continue
		visited.add(node)

		size = 1
		Q = deque()
		Q.appendleft(node)
		while Q:
			cur = Q.pop()
			for neighbour in g.edges[cur]:
				if neighbour in visited: continue
				visited.add(neighbour)
				Q.appendleft(neighbour)
				size += 1
		ncomponents += 1
		csize.append(size)

	return ncomponents,csize

q = int(input())


for _ in range(q):
	n,m,cost_lib,cost_road = [int(x) for x in input().split()]
	edges = [[int(x) for x in input().split()] for _ in range(m)]

	if cost_lib < cost_road:
		print(cost_lib*n)
		continue

	g = Adjcities()
	g.nodes = range(1,n+1)
	for a,b in edges:
		g.edges[a].add(b)
		g.edges[b].add(a)

	no_comp,comp_size = count_components(g)
	print(no_comp*cost_lib + sum((x-1)*cost_road for x in comp_size))
