"""
binarytree.py

CYRUS BURT |JAN 2019|

>>> x1 = node(3)
>>> x2 = node(1)
>>> x3 = node(4)
>>> y1 = node(1)
>>> y2 = node(9)
>>> y3 = node(2)

>>> x3.left = x1
>>> x3.right = x2
>>> y3.left = y1
>>> y3.right = y2
>>> x3.subtreelen()
2

>>> a = node(256)
>>> a.left = x3
>>> a.right = y3
>>> a.subtreelen()
6

>>> b = node(128)
>>> b.right = a
>>> b.left = a
>>> b.subtreelen()
14

>>> c = node(1024)
>>> c.left = b
>>> c.right = b
>>> c.subtreelen()
30
"""

class node():
    def __init__(self,value): #a node by default has no children nodes
        self.left = None
        self.right = None
        self.value = value

    def pushl(self, value):
        self.current.left = node(value)


    def subtreelen(self):
        if (not self.right) and (not self.left): #I think this logic could be cut down, couldn't figure out how
            return 0
        if not self.left:
            return 1
        if not self.right:
            return 1
        else:
            return 2 + self.left.subtreelen() + self.right.subtreelen()

class tree():
    def __init__(self, root):
        self.first = node(root)
        self.current = self.first

    def pushl(self, value):
        self.current.left = node(value)

    def pushr(self, value):
        self.current.right = node(value)

    """
        #my attempt at making logic to push to the tree
        #unfortunately I got stuck and a bit busy :(

        def push(self, value): #value should be a node 
            if self.current.left == None:
                self.pushl(value)
            elif self.current.right == None:
                self.pushr(value)
            else:
                self.current = self.current.left
                self.push(value)
    """
    def __len__(self):
        return 1 + self.first.subtreelen()


if __name__ == '__main__':
    import doctest
    doctest.testmod()

t = tree("a")
t.pushl("b")
t.pushr("c")
t.left.

print(len(t))