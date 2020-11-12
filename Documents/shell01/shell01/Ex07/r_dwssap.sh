#!/bin/sh


cat /etc/passwd | \
    grep -v '\#' | \
    sed '1!n;d' | \
    cut -d':' -f1 | \
    rev | \
    sort -r | \
    awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | \
    paste -s -d"," - | \
    sed 's/,/, /g' | \
    sed 's/$/./' | \
    tr -d '\n'

# grep -v "\#'	Imprime aquellas lineas que no tienen \# (los comentarios del inicio)
# sed '1!n;d' linea si, linea no
# cut : corta a partir de los :
# rev revierte
# se queda con el texto que hay entre las lineas especificadas
# coloca lo que hay en el clip
# sustituye comas por coma espacio
# sustituye dolar por punto
# borra el ultimo salto de linea



