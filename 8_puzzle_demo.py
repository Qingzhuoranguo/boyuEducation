import random

class eight_puzzle:
	def __init__ (self):
		self.state = [1,2,3,4,5,6,7,8,0]

		random.shuffle(self.state)
		while not self.check_solvability():
			random.shuffle(self.state)
		self.empty_index = self.check()

	def display (self):
		for i in range (9):
			if self.state[i] == 0:
				print ("\t *", end="")
			else:
				print ("\t",self.state[i], end="")
			if i == 2 or i == 5 or i == 8:
				print ()

		print ()

	def check_solvability(self):
		inversion = 0
		for i in range(len(self.state)):
			for j in range(i+1, len(self.state)):
				if (self.state[i] > self.state[j]) and self.state[i] != 0 and self.state[j]!= 0:
					inversion += 1
		return inversion % 2 == 0

	def check (self):
		x = 0
		for i in range (9):
			if x == self.state[i]:
				x = i 
				break
		return x

	def up(self):
		if self.empty_index == 0 or self.empty_index == 1 or self.empty_index == 2:
			print ("Error")
		else:
			temp = self.state[self.empty_index-3]

			# swap empty and the above
			self.state[self.empty_index-3] = self.state[self.empty_index]
			self.state[self.empty_index] = temp
			self.empty_index -= 3



	def down(self):
		if self.empty_index == 6 or self.empty_index == 7 or self.empty_index == 8:
			print ("Error")
		else:
			temp = self.state[self.empty_index+3]

			# swap empty and the above
			self.state[self.empty_index+3] = self.state[self.empty_index]
			self.state[self.empty_index] = temp
			self.empty_index += 3


	def left(self):
		if self.empty_index == 0 or self.empty_index == 3 or self.empty_index == 6:
			print ("Error")
		else:
			temp = self.state[self.empty_index-1]

			# swap empty and the above
			self.state[self.empty_index-1] = self.state[self.empty_index]
			self.state[self.empty_index] = temp
			self.empty_index -= 1

	def right(self):
		if self.empty_index == 2 or self.empty_index == 5 or self.empty_index == 8:
			print ("Error")
		else:
			temp = self.state[self.empty_index+1]

			# swap empty and the above
			self.state[self.empty_index+1] = self.state[self.empty_index]
			self.state[self.empty_index] = temp
			self.empty_index += 1

# as user:

# create game:
game = eight_puzzle()

# display the board:
game.display()

# move 7 down
game.right()

game.display()

