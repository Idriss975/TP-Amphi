CC = clang++
CFLAGS = -Wall -Wextra

all: EX15 run

EX15 EX15.cpp:
	$(CC) $(CFLANGS) EX15.cpp -o bin/EX15.exe

run bin/EX15.exe:
	bin/EX15.exe

clean:
	del .\bin\EX15.exe