CC=gcc
OPCOES_COMPILADOR=-I. -lm
TODOS_ARQUIVOS_PONTOH = coordenadas.h
TODOS_ARQUIVOS_OBJ = coordenadas.o teste-coordenadas.o

%.o: %.c $(TODOS_ARQUIVOS_PONTOH)
	$(CC) -Wall -o $@ -c $< $(OPCOES_COMPILADOR)

all: $(TODOS_ARQUIVOS_OBJ)
	gcc -o testes $^ $(OPCOES_COMPILADOR)

run: all
	./testes

clean:
	rm *.o testes
