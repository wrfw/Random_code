#!/bin/bash
#Instrukcja CASE

ZMIENNA=0

echo "sprawdzamy działanie instrukcji case"
echo -n "Podaj liczbę całkowitą z przedziału (0,4): "

read ZMIENNA

echo ""

case $ZMIENNA in
 1) echo "wybrałeś jedynkę";;
 2) echo "wybrałeś dwójkę";;
 3) echo "wybrałeś trójkę";;
 0) echo "to nie był przedział domknięty, dzbanie";;
 4) echo "weź się matmy naucz, to nie był przedział domknięty";;
 *) echo "dobra, siadaj, pała";;

esac
