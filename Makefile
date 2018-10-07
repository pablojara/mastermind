CC=g++
CFLAGS=-I. -Wall

mastermind: src/* include/*
	g++ -o mastermind src/* include/* -I.
