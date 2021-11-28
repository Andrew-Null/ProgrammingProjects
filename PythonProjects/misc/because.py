

def Fibonacci(num: int, id):
	print(id + ":" +str(num))
	if num <= 1:
		return num
	return Fibonacci(num - 1, id + ":a") + Fibonacci(num - 2, id + ":b") + Fibonacci(num - 3, id + ":c")

print(Fibonacci(20, "o"))
