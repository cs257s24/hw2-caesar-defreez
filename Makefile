.PHONY: all
all: encrypt decrypt

encrypt: encrypt.cpp caesar.cpp caesar.h
	g++ -o encrypt encrypt.cpp caesar.cpp -std=c++17 -g

decrypt: decrypt.cpp caesar.cpp caesar.h
	g++ -o decrypt decrypt.cpp caesar.cpp -std=c++17 -g

crack: crack.cpp caesar.cpp caesar.h
	g++ -o crack crack.cpp caesar.cpp -std=c++17 -g

test: test.cpp caesar.cpp caesar.h
	g++ test.cpp caesar.cpp -std=c++17 -lgtest -lgtest_main -pthread -o test


.PHONY: clean
clean:
	rm -f encrypt decrypt test