import vlc
import time

player = vlc.MediaPlayer("music/LetsGoBeatrix.mp3")
player.play()
time.sleep(5)
PLen =  player.get_length()
print(PLen)
time.sleep((PLen / 1000) - 5)
print(player.get_length())
player.stop()
