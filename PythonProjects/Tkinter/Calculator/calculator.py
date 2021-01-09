from tkinter import *

root = Tk()

#window
window = Canvas(root, bg="white", height=256, width=384)

#buttons
btn0 = Button(root,text='0', height=4,width=6)
btn1 = Button(root,text='1', height=4,width=6)
btn2 = Button(root,text='2', height=4,width=6)
btn3 = Button(root,text='3', height=4,width=6)
btn4 = Button(root,text='4', height=4,width=6)
btn5 = Button(root,text='5', height=4,width=6)
btn6 = Button(root,text='6', height=4,width=6)
btn7 = Button(root,text='7', height=4,width=6)
btn8 = Button(root,text='8', height=4,width=6)
btn9 = Button(root,text='9', height=4,width=6)
btns = [[btn0, btn1, btn2, btn3, btn4], [btn5, btn6, btn7, btn8,btn9]]


clmn = 1
rw = 2
for a in range(0,len(btns)):
	clmn = 0
	for b in btns[a]:
		b.grid(row = rw, column = clmn, pady = 4)
		clmn += 1
		print(clmn, rw)
	rw = 1

window.grid()
root.mainloop()
