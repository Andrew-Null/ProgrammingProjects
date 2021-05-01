import time
primes = [2,3]
count = 4

while(True):
	try:
		results = open("SieveResults.txt", "w")
		valid = True
		print("Trying: " + str(count))
		for prime in primes:
			if(count % prime != 0):
				time.sleep(0)
			else:
				print(str(count) + " : Not a prime")
				valid = False
				break
		if(valid == True):
			primes.append(count)
			results.write(str(primes))
	
		print(primes)
		count += 1
		results.close()
	except:
		results.write(str(primes))
		results.close()
		break
