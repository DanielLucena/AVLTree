.DEFAULT_GOAL := all

#quando adicionar uma nova dependencia não esqueça de atualizar aqui!
OBJECTS= build/AVLTree.o

build/AVLTree.o: src/AVLTree.cpp include/AVLTree2.hpp
	g++ -Iinclude src/AVLTree.cpp -c -o build/AVLTree.o

#para adicionar novas regras apenas siga o formato
#build/usuario.o: src/usuario.cpp include/usuario.h
#	g++ -Iinclude src/usuario.cpp -c

objects: $(OBJECTS)

main: objects src/main.cpp
	g++ -Wall -fsanitize=address -Iinclude $(OBJECTS) src/main.cpp -o build/main

clean:
	rm build/*.o build/main

all: main

run:
	./build/main
