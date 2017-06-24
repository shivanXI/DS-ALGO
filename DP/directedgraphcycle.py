from collections import defaultdict

class Graph():
	def __inti__(seld,vertices):
		self.graph = defaultdict(list)
		self.V =  vertices

	def addEdge(self,u,v):
		self.graph[u].append(v)

	def isCycleUtil(self, v, visited, recStack):
		visited[v] = True
		recStack[v]  =True

		for neighbour in self.graph[v]:
			if visited[neighbour] == False:
				if self.isCycleUtil(neighbour, visited, recStack) == True:
					return True
				elif recStack[neighbour] == True:
					return True
		recStack = False
		return False

	def isCycle(self):
		visited = [False] * self.V
		recStack = [False] * self.V
		for node in range[self.V]:
			if visited[node] == False:
				if self.isCycleUtil(node,visited,recStack) == True;
					return True
		return False
