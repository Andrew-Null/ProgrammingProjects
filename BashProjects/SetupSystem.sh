sudo chmod 777 /sys/class/backlight/intel_backlight/brightness
sudo systemctl start cronie.service
sudo systemctl start ntpd
export CHROME_EXECUTABLE=/usr/bin/brave
