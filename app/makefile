CC = gcc
CFLAGS = #-I/usr/include/postgresql
LDFLAGS = #-L/usr/lib/x86_64-linux-gnu/ -lpq -lcyaml -ljansson
TARGET = app

make clean:
	rm -f app

make: $(SRC)
	$(CC) $(CFLAGS) *.c -g -o $(TARGET) $(LDFLAGS)