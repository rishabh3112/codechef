#!/bin/bash
cd ./problems
read -p "Enter Name: " prob;
echo "Creating $prob :";
printf "Create Folder:";
mkdir $prob;
printf ".... done\n";
printf "Enter Folder:";
cd ./$prob;
printf ".... done\n";
printf "Create Q.md:";
touch Q.md;
printf ".... done\n";
printf "Create A.cpp:";
touch A.cpp;
printf ".... done\n";