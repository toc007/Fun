#!usr/bin/python2

class Node(object):
    def __init__(self, name, neighbors=[]):
        self.name = name 
        self.neighbors = neighbors
    def __repr__(self):
        res = self.name + ": \n"
        for n in neighbors:
            res += n + ", "
        res += '\n'
        return res

class Graph(object):
    def __init__(self, name, nodes=[], adjMtx=[[]]):
        self.name = name
        self.nodes = nodes
        numNodes = len(nodes)
        if len(adjMtx) != numNodes and len(adjMtx[0]) != numNodes:
            print "Setting to default adjMtx"
            self.adjMtx = [[False for i in range(numNodes)] for j in range(numNodes)]
        else:
            self.adjMtx = adjMtx
