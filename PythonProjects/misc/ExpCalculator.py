base = 0
power = 0
import time

while (True):
	
	base += 1
	power = 0

	while (power <= base):
	
		power += 1
		print('base: ' + str(base) + ' power: ' + str(power) + ' base**power:' + str(base**power))
		time.sleep(1)
