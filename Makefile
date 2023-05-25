build:
	gcc -Wall -std=c99 ./src/*.c `pkg-config --cflags --libs sdl2` -o renderer
run:
	./renderer
clean:
	rm renderer
