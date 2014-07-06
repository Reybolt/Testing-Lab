CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=testHeap.cpp heap.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=sortAlgorithm

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

#Delete all .o and .exe files
clean: 
	rm -f $(OBJECTS) $(EXECUTABLE) 
	@echo "Clean done: removes .o and .exe files" 

