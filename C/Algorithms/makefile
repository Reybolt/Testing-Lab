CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
#SOURCES=testSort.c bubbleSort.c insertionSort.c mergeSort.c 
SOURCES=testQuick.c quickSort.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=sortAlgorithm

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

#Delete all .o and .exe files
clean: 
	rm -f $(OBJECTS) $(EXECUTABLE) 
	@echo "Clean done: removes .o and .exe files" 

