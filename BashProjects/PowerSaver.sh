
time= date
echo $time
lc= 360

for ((var = 0 ; var < 360 ; var++))
do
	BatPer=$(upower -d | grep -E "percentage: " | grep -m 1 -Eo '[0-9]{1,3}')
	LightLF=$(light -G)
	LightLI=${LightLF%.*}
	echo $LightL
	if (( $BatPer <= $LightLI | bc)); then
		sudo light -S $BatPer
	elif (( $BatPer > $LightLI | bc)); then
		sudo light -A .2
	fi
	progress=$var/360
	echo $progress
	sleep 15s
	#var=$(( $var + 1))
done
