#!/bin/bash

# para arquivo de log
for file in *.log
do
	# inserimos no arquivo uma entrada nula para limpar o mesmo
	:>$file
done