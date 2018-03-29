LIBS=-I. -I/usr/include/SOIL -lglut -lGLU -lSOIL -lGLEW -lGL -lm
FILES=$(shell find ./ -name "*.c")
OBJECTS=$(shell find ./ -name "*.o")
EXEC=main
all: objects $(EXEC)
run: all
$(EXEC): $(OBJECTS)
	gcc $^ -o $@ $(CFLAGS) $(LIBS)
objects: $(FILES)
	gcc $^ -c $(CFLAGS) $(LIBS)
clean:
	rm -f ./*.o main
