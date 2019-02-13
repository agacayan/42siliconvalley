#!/bin/sh

find . -print | wc -l | sed 's/[[:space:]]//g'
