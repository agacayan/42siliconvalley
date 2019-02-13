#!/bin/sh

FT_LINE1=13
FT_LINE2=23

cat /etc/passwd | grep -v "#" | sed n\;g | cut -d ':' -f1 | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr '\n' ',' | sed 's/,$/\./' | sed 's/,/, /g'
