import time
import vlc

def GetYFormatTime():
	todo = time.asctime()
	SplitTodo = todo.split()
	fecha = SplitTodo[0]
	tiempo = SplitTodo[3]
	SplitTiempo = tiempo.split(':')
#print(SplitTodo)
#print(fecha)
#print(SplitTiempo)
	return [fecha, SplitTiempo[0], SplitTiempo[1]]

def SoloProblema(solopath):
	solotxt = open(solopath, 'w+')
	solotxt.write("0")
	solotxt.close()

def Register(solopath):
	try:
		solotxt = open(solopath, 'r')
	except IOError:
		SoloProblema(solopath)
		return 0
	try:
		osid = int(solotxt.read())
	except ValueError:
		SoloProblema(solopath)
		return 0

	solotxt.close()
	sid = osid + 1
	solowrite = open(solopath, 'w')
	solowrite.write(str(id))
	solowrite.close()

	return sid

def VerifySolo(solopath, soloid):
	solotxt = open(solopath, 'r')

	try:
		rid = int(solotxt.read())
	except ValueError:
		quit()

	if rid != soloid:
		quit()

	return True

def CheckAlarm(alarms):
#print(GetYFormatTime
	GFtime = GetYFormatTime()
	for alarm in alarms:
		print("debug info")
		print(GFtime)
		print(alarm)
		print(alarm[3])
		if GFtime[0] in alarm[0]:
			if int(alarm[1]) == int(GFtime[1]):
				if int(alarm[2]) == int(GFtime[2]):
#started = time.time()
					AlaSong = vlc.MediaPlayer(alarm[3])
#					time.sleep(5)
					AlaSong.play()
#AlarmLen = AlaSong.get_length()
#					print(AlarmLen)
#					AlarmLen = (AlarmLen/1000)-5
#					print(AlarmLen)
					time.sleep(150)
					AlaSong.stop()
