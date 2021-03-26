all: install

install:
	gcc main.c pythagorean.c -o build/pythagorean -lm

clean:
	rm build/*
