#!/usr/bin/env bash

UTILS=../utils
CSRC=$1
PROG=${CSRC%%.c}

gcc -I${UTILS} -I. ${UTILS}/*.c ${CSRC} test_main.c -o test_$PROG
