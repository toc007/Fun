import turtle
import math

def drawTriangle(turtle, x, y, r):
    '''
    turtle.up()
    turtle.setpos(x,y-r)
    turtle.down()
    turtle.circle(r)
    turtle.up()
    turtle.setpos(x,y)
    '''
    sideLen = math.sin(math.radians(120))*r/math.sin(math.radians(30))
    
    turtle.up()
    turtle.setpos(x,y+r)
    turtle.down()
    turtle.left(240)
    turtle.fd(sideLen)
    turtle.left(120)
    turtle.fd(sideLen)
    turtle.left(120)
    turtle.fd(sideLen)
    turtle.up()
    turtle.setpos(x, y)
    turtle.down()
    turtle.right(120)

def drawInvTriangle(t, x, y, r):
    sideLen = math.sin(math.radians(120))*r/math.sin(math.radians(30))
    
    t.begin_fill()
    t.up()
    t.setpos(x,y-r)
    t.down()
    t.left(60)
    t.fd(sideLen)
    t.left(120)
    t.fd(sideLen)
    t.left(120)
    t.fd(sideLen)
    t.up()
    t.setpos(x, y)
    t.down()
    t.left(60)
    t.end_fill()

def drawSierpinski(t, r, recDepth, x, y):
    if recDepth == 0:
        return

    drawTriangle(t, x, y, r)
    SierpinskiHelper(t, r, recDepth, x, y)

def SierpinskiHelper(t, r, recDepth, x, y):
    if recDepth == 0:
        return

    drawInvTriangle(t, x, y, r/2.)

    t.up()
    t2 = t.clone()
    t3 = t.clone()

    t.setpos(x, y+r/2.)
    t.down()

    t2.left(210)
    t2.fd(r/2.)
    t2.right(210)
    t2.down()

    t3.right(30)
    t3.fd(r/2.)
    t3.left(30)
    t3.down

    SierpinskiHelper(t, r/2., recDepth-1, *t.pos())
    SierpinskiHelper(t2, r/2., recDepth-1, *t2.pos())
    SierpinskiHelper(t3, r/2., recDepth-1, *t3.pos())


t = turtle.Turtle()
t.ht()
t.speed(0)
t.fillcolor('#FF69B4')
drawSierpinski(t, 500,5, 0,0)
turtle.done()
