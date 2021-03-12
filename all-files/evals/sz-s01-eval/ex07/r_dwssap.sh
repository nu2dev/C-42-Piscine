#!/bin/bash

cat /etc/passwd | \
grep -v "#" | \
cut -d ':' -f 1 | \
awk 'NR % 2 == 0' | \
sort -r | \
rev | \
sed -n "$FT_LINE1, $FT_LINE2 p; $FT_LINE2 q" | \
sed 's/$/,/g' | \
tr '\n' ' ' | \
sed 's/, $/./' | \
xargs echo -n
