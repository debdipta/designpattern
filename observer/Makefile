
CC=g++
CFLAGS=-g -c -Wall
LDFLAGS=
DEBUG_FLAGS=

SOURCES=main.cpp subject.cpp digitalclock.cpp clocktimer.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=observer

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) $< -o $@

clean:
	rm -rf *.o observer 
