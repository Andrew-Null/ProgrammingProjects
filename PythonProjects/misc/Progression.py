import math

level = 0
repoints = 5 * 4
gipoints = 0
sqr = 0
while gipoints < repoints or level < 10:
	level += 1
	#if level >= (sqr * sqr * sqr):
	sqr = int(math.log(level, 5))
	if sqr <= 0:
		sqr = 1
	gipoints += sqr
	repoints += 4
	print("level: " , str(level) , " Required: " , str(repoints) , " Given: " ,str(gipoints))
