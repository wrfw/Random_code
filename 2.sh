#!/bin/bash
#Tu próbuję napisać skrypt który zapisze coś do pliku

NAZWAPLIKU=""
TEKST=""

echo -n "podaj nazwę pliku: "
read NAZWAPLIKU
echo ""
echo -n "podaj tekst do zapisania"
read TEKST
echo ""
touch $NAZWAPLIKU
cat < $NAZWAPLIKU | $TEKST
less $NAZWAPLIKU
