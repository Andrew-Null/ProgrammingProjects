import math as m

num = 4
den = 1
res = num / den

while res != m.pi:
	print(str(num) + " / " + str(den) + " = " + str(res) + " | " + str(m.pi - res))
	if res < m.pi:
		num += 1
	elif res > m.pi:
		den += 1

	res = num / den
