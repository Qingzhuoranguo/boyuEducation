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