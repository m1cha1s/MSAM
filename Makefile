CC := gcc

.PHONY: all clean build
all: build msam

msam: build/main.o
	$(CC) -o $@ $^

build/%.o: src/%.c
	$(CC) -c $< -o $@
	
clean:
	rm -rf build/ msam
	
build:
	mkdir -p build