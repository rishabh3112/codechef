#!/bin/bash
printf "Compiling A.cpp ";
g++ A.cpp;
printf "....done\n";
printf "Executing program ....\n-------------\nEnter Input:\n";
./a.out;
printf "\n------------\nProgram Execution ended\n";
rm ./a.out;