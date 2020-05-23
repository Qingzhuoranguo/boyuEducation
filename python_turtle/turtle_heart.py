import turtle
turtle.bgcolor("black")
turtle.pensize(2)
graph = turtle.Turtle()


def curve ():
	for i in range (200):
		turtle.right(1)
		turtle.forward(1)


turtle.color("red","pink")

turtle.speed(20)
turtle.begin_fill()
turtle.left(140)

for i in range (111):
	turtle.forward(1)
turtle.forward(0.65)
curve()

turtle.left(120)
curve()
for i in range (111):
	turtle.forward(1)
turtle.forward(0.65)

turtle.end_fill()
turtle.hideturtle()
turtle.done()
