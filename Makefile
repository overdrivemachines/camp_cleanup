
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

camp_cleanup: camp_cleanup.o
	$(CC) $(CFLAGS) -o camp_cleanup camp_cleanup.o

camp_cleanup.o: camp_cleanup.cpp
	$(CC) $(CFLAGS) -c camp_cleanup.cpp

clean:
	rm -rf camp_cleanup camp_cleanup.o
