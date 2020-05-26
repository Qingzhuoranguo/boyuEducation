## 1. logic, as a human how to solve it
## 2. how to represent the problem in CS world
## 3. how to implement

# e.g.
ls = []

# root index = 0
ls.append (7)


# 7's 2 children

# 8's index = 1
ls.append (8)
# 16's index = 2
ls.append (16)


# 8's 2 children

# 10's index = 3
ls.append (10)



# If node's index is k
# Set parent of the node at index floor (k/2)
# Set children at index 2k and 2k+1

# e.g node (index = 0) 
#   parent of node = floor( 0/2 ) = 0 
#  indicates parent of the node is itself, which indicates it is the root



Heap = [];

Heap.append(0);

Heap.append(7);
Heap.append(8);
Heap.append(10);
Heap.append(12);
Heap.append(14);
Heap.append(13);
Heap.append(20);


# insert 6
Heap.append(6);

import math


def insert ( key ):
	index = 8
	for i in range ( log2(len(Heap)) ):
		parent_index = math.floor (index/2);
		if ( Heap[index] > Heap[parent_index]):
			swap (Heap[index], Heap[parent_index]);
			index = parent_index;
		else:
			break;


def find_min ():
	return Heap[1]

def extract_min():
	result = Heap[1]

	#delete root 
	#repair