#!/bin/bash
#To czas na pętle while
ZMIENNA=10
while [ $ZMIENNA -le 20 ]; do
	echo $ZMIENNA
	ZMIENNA=$(($ZMIENNA+1))
done
