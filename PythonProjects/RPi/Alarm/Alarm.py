import vlc
import time
import AlarmFunctions as AF

songs = [
        "music/GoodMorning.mp3",
        "music/LetsGoBeatrix.mp3",
        "music/RememberedAndForgotten.mp3",
        "music/ToD.mp3"
        ]

weekdays = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri']

alarms = [[weekdays, 5, 0, songs[0]], 
        [weekdays, 6, 0, songs[1]], 
        [weekdays, 6, 15, songs[3]], 
        [weekdays, 6, 30, songs[2]]]

solopath = "single.txt" 
testtime = AF.GetYFormatTime()
tester =[[testtime[0], testtime[1], testtime[2], songs[3]]]

#print(AF.GetYFormatTime())

sid = AF.Register(solopath)
solo = AF.VerifySolo(solopath, sid)

#player = vlc.MediaPlayer(songs[0])
#int(player.get_length())
#player.play()
#time.sleep(10)
while solo == True:
    
	AF.CheckAlarm(alarms)   
	time.sleep(15.1)
#	quit()
	solo = AF.VerifySolo(solopath, sid)
