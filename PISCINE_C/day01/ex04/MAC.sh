#!/bin/sh

ifconfig -a | grep -v -e 'media*' | grep -e 'ether*' | sed 's/ether//'
