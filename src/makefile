IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)

BIN=../bin

_DEPS = event_manager.h modules.h init.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = event_manager.o init.o module.o
OBJ = $(patsubst %,$(BINS)/%,$(_OBJ))


$(BIN)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BIN)/event_manager: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
