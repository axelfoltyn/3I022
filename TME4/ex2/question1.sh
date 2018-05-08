#! /bin/bash

med -x 3 -y 3 camimpuls.inr.gz camimpuls2.inr.gz
med -x 9 -y 9 camimpuls.inr.gz camimpuls3.inr.gz
med -x 21 -y 21 camimpuls.inr.gz camimpuls4.inr.gz


echo
echo
echo "Image d'origine"
echo
echo


xvis camimpuls.inr.gz 2>/dev/null

echo
echo
echo "Image après application d'un filtre médian 3x3"
echo
echo
xvis camimpuls2.inr.gz 2>/dev/null
echo
echo
echo "Image après application d'un filtre médian 5x5"
echo
echo

xvis camimpuls3.inr.gz 2>/dev/null
echo
echo
echo "Image après application d'un filtre médian 7x7"
echo
echo

xvis camimpuls4.inr.gz 2>/dev/null
echo
echo
echo "Suppression des images créées"
echo
echo



rm -f camimpuls[2-4].*
