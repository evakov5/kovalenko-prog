
clean: 
	rm -rf dist

prep: 
	mkdir dist

compile: 
	clang -g src/main.c -o ./dist/main.bin

doxygen: 
	doxygen Doxyfile

all: clean prep compile doxygen

