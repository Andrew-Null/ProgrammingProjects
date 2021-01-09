cd
cd ProgrammingProjects
CuDa='date'

git init
git add ArduinoProjects/
git add CPProjects/
git add CProjects/
git add JavaProjects/
git add PythonProjects/
git add BashProjects/
git add CProjects/
git add PolyProjects/
git commit -m $CuDa
git branch -M main
git remote add origin https://github.com/ScorpionKing819/ProgrammingProjects.git
git push --force origin main
