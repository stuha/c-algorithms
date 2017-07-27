#!/usr/bin/env bash

CSRCS=$(ls *.c)

for csrc in ${CSRCS}; do
    rm -f test_${csrc%%.c}
done
rm -f test_main
