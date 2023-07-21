mport turtle
screen=turtle.Screen()
trtl=turtle.Turtle()
screen.setup(620,620)
screen.title('A Clock dial made by Me')
screen.bgcolor('black')
clr=['pink','green','white','yellow','purple']
trtl.pensize(3)
trtl.shape('turtle')
trtl.shape('turtle')
trtl.penup()
trtl.pencolor('yellow')
m=0
for i in range(12):
    m=m+1
    trtl.penup()
    trtl.setheading(-30*i+60)
    trtl.forward(150)
    trtl.pendown()
    trtl.forward(50)
    trtl.penup()
    trtl.forward(20)
    trtl.write(str(m),align="center",font=("times new roman", 12,"normal"))
    if m==12:
        m=0
    trtl.home()

trtl.home()
trtl.setpos(0,-250)
trtl.pendown()
trtl.pensize(10)
trtl.pencolor('pink')
trtl.circle(250)
trtl.penup()
trtl.setpos(150,-270)
trtl.pendown()
trtl.pencolor("olive")
trtl.write("If your Action Inspire others     \n To Dream more\n ")
trtl.ht()