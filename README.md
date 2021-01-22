This Git Repository is not one project
It is a backup and collection small of projects/programs

The repository is largely organized by language 
Then the library I am focusing on learning or the inspiration
(24h in CPProjects which is based on the exercises in Sams Teach yourself C++ in 24 hours)

Functional Programs
	BashProjects
			mostly cronjobs		

		PowerSaver.bsh
			lowers screen brightness to match battery 
			if battery percentage is below screen brightness
			and raises it slowly if battery percnetage is above screen brightness
			
			run hourly by a cronjob

		GitUpload.bsh
			can automaticlly make commits 
			though depending on differences between laptop and repository can be hit or miss

			run daily by a cronjob

		APS.sh
			arduino permission script
			acts as a shortcut to another script
			used to set permissions to allow uploading to arduinos
			
			should swap for a symbolic link
			got the script it runs off of git hub unfortunately don't remember who
			
	JavaProjects
			not much to see here
			don't have many (or any really) java related plans

		hello
			hello world program

	CProjects
			most effort has been diverted to c++

		howstuffworks
			collection of programs from howstuffworks.com's c tutorials

			getting the actual url into vim would be rather annoying
			could use gedit to but not going to

		BatteryCalculator.c
			calculates battery capacity

		tutorialpoint.c
			program based off of one from tutorialpoint.com

			again don't have the actual url

	PolyProjects
			if it went anywhere likely would be full of python and cython (c/c++)

	PythonProjects
			what I have probably done the most in
			
			need to get programs off of other computers

		ExpCalculator.py
			exponent calculator

			started with fors
			now uses whiles because a friend said that I didn't need to know that much

	CPProjects
			mostly arduino stuff

		24h 
			as stated above colection of programs derived from sams teach yourself c++ in 24 hours

			mostly skimming the book and using for reference

		ArduinoProjects
				 current priority

			Morse.ino
				class for blinking morse code on a led via arduino
				only does one pin at a time

			1.ino
				testing out arduino

				prototype/inspiration for morse

			Tester.ino
				7 segment led controller class
				
				what forced me to learn how to pass arrays
				because of course passing arrays can't be simple
				why I like classes in c++ once the array is in the class no need to pass it around

				ordered and delayed for looks
