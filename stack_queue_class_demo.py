class stack:

	# constructor
	def __init__ (self):
		self.ls = []
		self.length = 0
		self.max_length = 10

	def pop (self):
		if self.length == 0:
			print ("stack empty!")
			return -1
		(self.ls).pop( 0 )
		self.length -= 1
		print ("pop success!")
		return 0

	def push (self, num):
		if self.length >= self.max_length:
			print ("max length has reached!")
			return -1


		(self.ls).append(num)
		self.length += 1
		print (num, " is pushed!")
		return 0

	def print_stack(self):
		print (self.ls)





stack_object = stack()

for i in range (11):
	stack_object.push (i)


	stack_object.print_stack()

for i in range (11):
	stack_object.pop()
	stack_object.print_stack()


