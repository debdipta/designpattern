
CC=g++
CFALGS=-g -c -Wall
LDFLAGS=

SOURCES=main.cpp logger.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=logger

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFALGS) $< -o $@

clean:
	rm -rf *.o logger
