#!/bin/bash

cd &> debug.txt
cd ProgrammingProjects &>> debug.txt

eval 'ssh-agent -s' &>> debug.txt
git init &>> debug.txt

git add CPProjects/ &>> debug.txt
git add CProjects/ &>> debug.txt
git add JavaProjects/ &>> debug.txt
git add PythonProjects/ &>> debug.txt
git add BashProjects/ &>> debug.txt
git add CProjects/ &>> debug.txt
git add PolyProjects/ &>> debug.txt
#git add misc #&>> debug.txt
git add README.md
git add RustProjects/ &>> debug.txt

git branch -M main &>> debug.txt
git remote add set-url origin git@github.com:Andrew-Null/ProgrammingProjects.git &>> debug.txt
