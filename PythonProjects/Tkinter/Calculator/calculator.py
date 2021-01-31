from tkinter import *

root = Tk()

#
current = ''
previous = ''
operation = ''

#grid size variables
cs = 1
rs = 1

#window
window = Canvas(root, height= 100 , width=100)

#buttons
btn0 = Button(root,text='0')#, height=4,width=6)
btn1 = Button(root,text='1')#, height=4,width=6)
btn2 = Button(root,text='2')#, height=4,width=6)
btn3 = Button(root,text='3')#, height=4,width=6)
btn4 = Button(root,text='4')#, height=4,width=6)
btn5 = Button(root,text='5')#, height=4,width=6)
btn6 = Button(root,text='6')#, height=4,width=6)
btn7 = Button(root,text='7')#, height=4,width=6)
btn8 = Button(root,text='8')#, height=4,width=6)
btn9 = Button(root,text='9')#, height=4,width=6)i

btnp = Button(root, text = '+')
btns = Button(root, text = '-')
btnm = Button(root, text = '*')
btnd = Button(root, text = '/')
btne = Button(root, text = '=')

btns = [[btn0, btn1, btn2, btn3, btn4], [btn5, btn6, btn7, btn8,btn9], [btnp, btns, btnm, btnd, btne]]


rw = 2
for a in range(0,len(btns)):
	clmn = 1
	for b in btns[a]:
		b.grid(row = rw, column = clmn, columnspan = cs, rowspan = rs)
		clmn += 1
		print(clmn, rw)
	rw += 1

dis = Text(root, height = 4, width = 30)
dis.grid(row = 0, column = 1, columnspan = (cs * 5), rowspan = rs)


window.grid()
root.mainloop()
