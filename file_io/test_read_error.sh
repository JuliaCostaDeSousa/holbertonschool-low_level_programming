#!/bin/bash

# Nom du binaire compilé
BINARY=3-cp

# Fichiers source/destination pour le test
SRC=textfile_0
DEST=textfile_0_copy

# Compilation
echo "🔧 Compilation..."
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-cp.c -o $BINARY

# Vérification de compilation
if [ $? -ne 0 ]; then
    echo "Compilation échouée"
    exit 1
fi

# Exécution avec LD_PRELOAD
echo "Exécution avec surcharge de read()..."
LD_PRELOAD=./libfake_read.so ./$BINARY $SRC $DEST

# Récupération du code de retour
ret=$?

echo -e "Code de retour : $ret"