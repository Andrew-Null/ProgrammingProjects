import os

#os specific
#defaults are set for linux
path = "/"
root = "/"
PathChar = "/"

def GetPath():
	GVI = False #got valid input
	print("What operating system are you using?")
	while(GVI == False):
		IG = input("[W]indows, [Linux], or [O]ther: ") # input gotten
		#input processing
		IG = IG.upper()
		if IG.startswith("W"):
			root "C:\\"
			path = root
			PathChar = "\\"

		elif IG.startswith("L"):
			pass

		else:
			root = input("please input the root directory")
			path = root
			PathChar = intput("please input the character(s) used to seperate directories for your OS")
			print("are these correct")
			print("Root Directory:" + root)
			print("Path Character" + PathChar)
			CS = input("[Y]es or [N]o")
			CS = CS.upper()


def main():
	GetPath()

main()
