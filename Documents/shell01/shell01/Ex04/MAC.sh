#!bin/bash

ifconfig | grep ether | sed s/.*ether//g | tr -d "[:blank:]"
