CC=g++
CFLAGS=-Wall -g
SRC=main.cpp
OBJ=$(SRC:.cpp=.o)
EXEC=guess-the-number

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(EXEC)