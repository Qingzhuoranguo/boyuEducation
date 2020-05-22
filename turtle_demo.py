import turtle 

alex = turtle.Turtle()
turtle.speed(500)
alex.pensize(10)
# for loop
for i in range(360*3):
	check = i%3
	if check ==1:
		alex.color("red")
	elif check == 2:
		alex.color("yellow")
	elif check ==3:
		alex.color("purple")
	else:
		alex.color("blue")

	alex.forward(0.01 * i)
	alex.left(1)


# for aColor in ["yellow","red","purple","blue"]:
# 	alex.color(aColor)

# 	alex.forward(250)
# 	alex.left(90)


turtle.done()

hash function 