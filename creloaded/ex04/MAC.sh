#/bin/sh

ifconfig | grep -w "ether" | tr -s ' ' | cut -d " " -f3