import secrets as rng

class PWGenerator:

	num = 0 #number of words
	CWord = '' # current word
	VarL = 0 #variable for loops
	VarL2 = '' #another variable for loops
	TL = 0 #total number of letters

	OWords = [] #original words
	AllChars = [] #store the letters individually from all the words
	SWChars = [] #words divided up in to individual characters but words are isolated
	SWord =[] # individual word split up in to its individual characters
	MeshedChars = [] #store the characters meshed together
	AlteredChars = [] #altered characters

	Password = '' #AlteredChars[] elements concatonated together

	BaseChars = ('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z') #lower case alphabet
#SpecialChars = () #fill with special characters/symbols then create function to append a character (atleast) to each of AlternativeChars[] element-arrays (probably should be optional) 
	AlternativeChars = (
		('a', 'A', '@', '1'), #a1
		('b', 'd', 'B', '8', 'D', '2', 'p', 'P', '6', 'R', 'r'), #b2 
		('c', 'C', 'k', 'K', '3', '('), #c3
		('d', 'b', 'D', 'B', '4', 'P', 'p', '6'), #d4
		('e', 'E', '3', '5', 'b', 'B'), #e5
		('f', 'F', 'E', 'e', '6'), #f6
		('g', 'G', '6', 'q', '9', 'Q', '7'), #g7
		('h', 'H', '4', '8', 'n', 'N','k', 'K'), #h8
		('i', 'I', '1', '!', 'l', 'L', '9'), #i9
		('j', 'J', 'i', 'I', '10', 'l', 'L', '1', '0'), #j10
		('k', 'K', '11', 'C', 'c', 'h', 'H', '1'), #k11
		('l', 'L', '12', '1', '2', 'I', '|', '!', 'j', 'J'), #l12
		('m', 'M', 'n', 'N', '13', '1', '3', 'u', 'U', 'nn', 'NN', 'uu', 'UU', 'uuu', 'UUU', 'NNN', 'nnn'), #m13
		('n', 'N', '14', '1', '4', 'u', 'M', 'm', 'nn', 'NN', 'll', 'l', 'L', 'LL'), #N14
		('O', 'o', '0', '15', '1', '5', 'q', 'Q'), #o15
		('p', 'P', 'q', 'Q', '16', '1', '6', 'b', 'B', 'd', 'D', '9', '4'), #p16
		('q', 'Q', 'p', 'P', 'g', 'd', 'D', 'G', 'B', 'b' '17', '1', '7', '9', '0', 'o', 'O'), #q17
		('r', 'R', 'p', 'P', 'd', 'b', 'D', 'B', '18', '1', '8') #r18
	)

	def GetWords():
		NoNum = True
		while NoNum == True: # while don't have valid number of words
			try: #try to get valid number 
#get number of words
				num = int(input("How many words do you want to use?"))
				num = abs(num) #get absolute value to idiot proof
				NoNum = False #break while loop
			except ValueError: #if ValueError go straight to except do not set NoNum False
				pass #pass and continue while loop
#get words
		for VarL in range(num):
			CWord = input("word " + str(VarL) + ": ") #get word 
			OWords.append(CWord.lower()) #save word and make all letters lowercase

		print(OWords) #for debugging purposes

	def MeshWords(): #pass results of FormatWords()
		pass

	def FormatWords(): #pass results of GetWords()

		loopn = -1 #number of loops -1 or index of VarL in OWords[]

#make all letters lower case
#iterate through OWords[]
		for VarL in OWords:
			loopn += 1 #increment loopn to match index of VarL in OWords[]
#iterate through 'VarL'
			for VarL2 in VarL:
				AllChars.append(VarL2) #append the letter 1 by 1 to AllChars[]
				SWord.append(VarL2) #append the letter 1by 1 to SWord[] to then append SWord[] to SWChars[]
			SWChars.append(SWord) # append SWord to SWChars once containing the entire word 
			SWord = [] # clear SWord[] of contents after appending full word to SWChars[]
		TL = len(AllChars) #get the number of letters via the length of AllChars[]

	def Encrypt(): # encrypt characters
		pass
			
	def Coordinator(): #call needed functions in order
		GetWords()
		FormatWords()
		MeshWords()
		Encrypt()

