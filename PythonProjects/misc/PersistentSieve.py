import time

primes = []
count = 0

def PersistenceError():
	print("PError Detected")
	results = open('PersistentResults.txt', 'w')
	primes = [2,3,5,7]
	count = 9
	results.close()
	Memorize(primes, count)
	return [primes, count]

def Verify(primes):
	print('Verifying remembered primes')
	size = len(primes)
	mp = max(primes) # max prime
	mf = 2
#tpa = [] # temp primes array
	for pi in range(0,size): # primes index
		for mf in range(2,mf): # maybe factor
			if(primes[pi] > mf):
				if(primes[pi] % mp == 0):
					primes.pop(pi)
					print(str(primes[pi]) + ' :is not prime')
					print(str(primes[pi]) + ' :is being dropped')
	return primes			
				



def Remember():
	print('Remembering')
	ee = False #encountered error
	try:
		results = open('PersistentResults.txt', 'r')
	except IOError:
		print('PersistentResults.txt not found using defaults')
		recalled = PersistenceError()
		ee = True

	if(ee == False):
		contents = results.read()
		contents = contents.split(";")
		print(contents)
		count = int(contents[1])
#		print("count:" + str(count))
		contents = contents[0].split(":")
		for content in contents:
#			print("content:" + str(content))
			primes.append(int(content))
		recalled = [primes, count]
		results.close()
	return recalled

def Memorize(primes, count):
	print('Memorizing')
	size = len(primes)
	results = open('PersistentResults.txt', 'w')
	for pi in range(0,size): #prime index

		try:
			int(primes[pi])
			if(pi != 0):
				results.write(':' + str(primes[pi]))
			else:
				results.write(str(primes[pi]))
		except TypeError:
			print("Invalid value found")
			print('Value: '+ str(prime[pi]) + " being dropped")
	results.write(';' + str(count))

def Find(primes, count):
	try:
		print('Searching')
		print(primes)
		print(count)
		time.sleep(5)
		dc = 'n'
		ds = True # do search
		sdm = 1 # sd modifier
		sd = len(primes) + sdm # search duration
		while(ds):
			while(len(primes) < sd):
				print('trying: ' + str(count))
				pnp = False # proved not prime
				for prime in primes:
					if((count/2) <= prime):
						break
					if(count % prime == 0):
						print(str(count) + ' is divisible by ' + str(prime) + '.')
						print(str(count) + ' is not prime')
						pnp = True
						time.sleep(.1)
						break
					else:
						print(str(count) + ' not factorable by ' + str(prime))
						time.sleep(0)
				if(pnp == False):
					print(str(count) + ' is a prime')
					primes.append(count)

				if(count % 2 == 0):
					count += 1
				else:
					count += 2
			print('The current primes found are:')
			print(primes)
			Memorize(primes, count)
			print(str(len(primes)) + ' prime numbers')
			if(dc != 'c'):
				print('\ncontinue? [y/c/n]')
				print('y - yes, c - continue without asking again (must be terminated manually), n - no and end program')
				dc = input() #do continue
				dc = dc.lower()
				if(dc.startswith('y')):
					sdm += 1
					sd += sdm + 5
				elif(dc.startswith('c')):
					print('remember press ctrl + c to kill program')
					sdm += 1
					sd += sdm + 1
				else:
					ds = False
					sd += 1

			else:
				sdm += 1
				sd += sdm
				time.sleep(2.5)
	except KeyboardInterrupt:
		Memorize(primes, count)

recalled = Remember()
Find(recalled[0],recalled[1])
