cd
cd ProgrammingProjects

eval 'ssh-agent -s'

git init
git add ArduinoProjects/
git add CPProjects/
git add CProjects/
git add JavaProjects/
git add PythonProjects/
git add BashProjects/
git add CProjects/
git add PolyProjects/
git commit -m date -u
git branch -M main
git remote add set-url origin git@github.com:ScorpionKing819/ProgrammingProjects.git
git push --set-upstream origin main
