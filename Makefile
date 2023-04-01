CC=g++ 

OBJS= obj/main.o obj/Barre.o obj/Ball.o obj/Couleur.o

CFLAGS= -g -W 

INCLUDE_LIB_DIR=-I/usr/include/SDL2 -lSDL2	

LIB_DIR=-L/usr/bin/sdl2-config -lSDL2

all: bin/Prog

bin/Prog: $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o bin/Prog $(LIB_DIR)

obj/main.o: src/main.cpp 
	$(CC) $(CFLAGS) src/main.cpp -c -o obj/main.o $(INCLUDE_LIB_DIR) 

obj/Barre.o: src/Barre.cpp include/Barre.hpp 
	$(CC) $(CFLAGS) src/Barre.cpp -c -o obj/Barre.o $(INCLUDE_LIB_DIR)



obj/Ball.o : src/Ball.cpp include/Ball.hpp 
	$(CC) $(CFLAGS) src/Ball.cpp -c -o obj/Ball.o $(INCLUDE_LIB_DIR)

obj/Couleur.o: src/Couleur.cpp include/Couleur.hpp 
	$(CC) $(CFLAGS) src/Couleur.cpp -c -o obj/Couleur.o $(INCLUDE_LIB_DIR)

clean:
	rm *.o 

veryclean: 
	rm Prog