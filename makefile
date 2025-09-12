main: main.c status.h student.h
	gcc -Wall -Wextra -std=c99 -o main main.c 

clean:
	rm -f main

.PHONY: clean