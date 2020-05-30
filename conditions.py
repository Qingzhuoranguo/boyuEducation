 

# logic expression
# 3 > 2 = True
# 3 < 2 = False
# 3 == 3 = True
# 3 >= 1 = True
# 3 <= 1 = False

# # math expression
# 3 + 2 = 5



# e.g.

# x = 3

# y = 4 

# if statemenment

# if x > 3:
# 	print ("yes!")
# elif x == 3:
# 	print ("hmm..")
# else:
# 	print ("no!")



# simple application
n = 100

while True:
	user_input = int ( input("Please give me a number: ") )

	if user_input < n:
		print ("Too small!")
	elif user_input > n:
		print ("Too big!")
	else:
		print ("Yes, you got it right!")

		break

