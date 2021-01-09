#!/bin/bash

cd
cd ProgrammingProjects

eval 'ssh-agent -s'

Cuda=date+"%A, %b %d, %Y %I: %M %p"
echo $Cuda

cat $Cuda >> README.md

git init
git add ArduinoProjects/
git add CPProjects/
git add CProjects/
git add JavaProjects/
git add PythonProjects/
git add BashProjects/
git add CProjects/
git add PolyProjects/
git commit -m "Testing Commit Script"
git branch -M main
git remote add set-url origin git@github.com:ScorpionKing819/ProgrammingProjects.git
git push --set-upstream origin main
