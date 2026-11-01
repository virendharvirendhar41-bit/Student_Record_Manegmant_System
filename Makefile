out:main.o function.o
	cc main.c function.c -o out
main.o:main.c
	cc -c main.c
function.o:
	cc -c function.c
