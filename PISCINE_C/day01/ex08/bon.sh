#!/bin/sh

ldapsearch -Q "(sn=*bon*)" | grep -e "sn:" | wc -l | sed 's/[[:space:]]//g'
