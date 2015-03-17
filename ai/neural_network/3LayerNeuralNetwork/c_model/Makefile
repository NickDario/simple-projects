nn: main.o neural_network.o node.o input_node.o multiples_node.o hidden_node.o
	g++ -o nn main.o neural_network.o node.o input_node.o multiples_node.o hidden_node.o

main.o: main.cpp node.h
	g++ -c main.cpp

neural_network.o: neural_network.h hidden_node.o input_node.o
	g++ -c neural_network.cpp

input_node.o: node.o input_node.h
	g++ -c input_node.cpp

hidden_node.o: node.o hidden_node.h
	g++ -c hidden_node.cpp

multiples_node.o: hidden_node.o multiples_node.h
	g++ -c multiples_node.cpp

node.o: node.cpp node.h
	g++ -c node.cpp

clean:  
	rm *.o

