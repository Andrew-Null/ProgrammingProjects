#def Interest(Total, inter, pay):
#	Total = (Total * inter) - pay
#	print(Total, pay)
#	if Total > 0:
#		Interest(Total, inter, (Total * (inter - 1)) + 1)

#Interest(1000, 1.01, 1)

import time
Total = 10000
inter = 1.9
pay = -40
loop = 0
while Total > 0 and Total != float("inf"):
	pay += loop * ((pay * int(pay > 0) + int(0 > pay)))
	Total = (Total * inter) - (pay * int(pay > 0))
	print(Total, pay)
	time.sleep(.5)
	loop += 1	
