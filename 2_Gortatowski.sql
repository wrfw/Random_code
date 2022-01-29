/* Część I */

SELECT imie, nazwisko, 
SUBSTR( imie, 0, 2 ) || SUBSTR( nazwisko, 0, 1) || id AS tabela
FROM Pracownicy;

SELECT nazwisko, 
REGEXP_REPLACE( nazwisko, 'K|k|W|w|S|s', 'x') as ZMODYFIKOWANE
FROM Pracownicy;

SELECT nazwisko,pensja, ROUND( pensja*1.15 ) AS POWIĘKSZONA_PENSJA
FROM Pracownicy;

SELECT nazwa, termin_oddania, FLOOR( MONTHS_BETWEEN(CURRENT_DATE,termin_oddania)) AS miesiące,
FLOOR( MONTHS_BETWEEN(CURRENT_DATE, termin_oddania))/12 AS lata,
CURRENT_DATE-termin_oddania AS dni
FROM Projekty
WHERE CURRENT_DATE > termin_oddania;

SELECT nazwa, termin_oddania, TO_CHAR(termin_oddania, 'day') AS DZIEN_TYGODNIA
FROM projekty
WHERE p_id = 'p1';

SELECT szef_projektu
FROM Projekty
WHERE termin_oddania > TO_DATE ( '2019/08/15', 'yyyy/mm/dd' ) AND termin_oddania < TO_DATE( '2020/03/30', 'yyyy/mm/dd');

/* Część II */

SELECT nazwa || ASCIISTR( ' jest dostepny pod numerem tel.: ' ) || telefon
FROM Klienci
WHERE NVL2(telefon, 0,1) = 0;

SELECT imie, nazwisko, ROUND(0.19*pensja, 2) AS podatek
FROM Pracownicy;

SELECT nazwa, NVL(prac_kontaktowy, 0) AS pracownik_kontaktowy
FROM Klienci;

INSERT INTO Pracownicy (id,imie,nazwisko,id_dzialu,pensja,projekt) 
VALUES (51,'Jan','Kowalski',5,NULL,NULL);

SELECT  SUM(pensja)/COUNT(id) AS srednia,
        SUM(NVL(pensja,0))/COUNT(id) AS srednia_null_0,
        SUM(NVL(pensja,1800))/COUNT(id) AS srednia_null_1800
FROM Pracownicy;

SELECT ROUND( SUM(pensja - 0.19*pensja)/COUNT(id), -2)
FROM Pracownicy;