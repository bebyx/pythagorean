all: install

install:
	mkdir build
	gcc pythagorean.c -o build/pythagorean -lm

clean:
	rm build/*
	rm build
