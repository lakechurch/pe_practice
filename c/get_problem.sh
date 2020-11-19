#!/bin/bash

# Usage ./get_problem.sh <problem num>
# E.g. ./get_problem.sh 128

###### Variables
qnum=$1
file="q$1.c"
echo $file
######

###### Get minimal html
wget -m http://projecteuler.net/minimal=$qnum -O $file
######

###### Change html to c comment
sed -i '1s/^/\/*\n/' $file
sed -i 's/<p>/ * /g' $file
sed -i 's/<\/p>//g' $file
sed -i 's/^$/ *\/\n/' $file
######
