#!/bin/bash
echo "Oto skrypt teskowy. Brak wersji. Brak sensu. Jest tekst w konsoli"

ZMIENNA=12
ZMIE=2
#bash jest wymagający jak cholera
if [ $ZMIENNA > $ZMIE ];
then
	echo "działa"
else
	echo "nie działa"
fi
#Dobra, testujemy READ

read ZMIENNA
if [ $ZMIENNA > 10 ];
then
	echo "trytytka suko"
else
	echo "mniejsza trytytka"
fi

#ogólnie skoro mogę tu pisać zwykłe komendy konsoli, to
#skrypty są bardzo pożyteczne
#mogę łatwo zapisywać tekst za pomocą cat >> czy jakoś tak
