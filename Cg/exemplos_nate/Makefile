CC=gcc
OPCOES_COMPILADOR=-I. -lglut -lGLU -lGLEW -lGL -lm
TODOS_ARQUIVOS_PONTOH = glm.h sgi.h
TODOS_ARQUIVOS_OBJ = sgi.o glm.o

%.o: ../%.c $(TODOS_ARQUIVOS_PONTOH)
	$(CC) -o $@ -c $< $(OPCOES_COMPILADOR)

transformation: $(TODOS_ARQUIVOS_OBJ) transformation.o 
	gcc -o transformation $^ $(OPCOES_COMPILADOR)
	./transformation

projection: $(TODOS_ARQUIVOS_OBJ) projection.o 
	gcc -o projection $^ $(OPCOES_COMPILADOR)
	./projection

lightposition: $(TODOS_ARQUIVOS_OBJ) lightposition.o
	gcc -o lightposition $^ $(OPCOES_COMPILADOR)
	./lightposition

lightmaterial: $(TODOS_ARQUIVOS_OBJ) lightmaterial.o 
	gcc -o lightmaterial $^ $(OPCOES_COMPILADOR)
	./lightmaterial

fog: $(TODOS_ARQUIVOS_OBJ) fog.o
	gcc -o fog $^ $(OPCOES_COMPILADOR)
	./fog

texture: $(TODOS_ARQUIVOS_OBJ) texture.o
	gcc -o texture $^ $(OPCOES_COMPILADOR)
	./texture


clean:
	rm *.o transformation projection lightposition lightmaterial fog texture

