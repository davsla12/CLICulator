CC = gcc
CFLAGS = -Wall -g

# seznam zdrojových souborů
SRCS = main.c settings/commands.c functions/python.c

# vygenerujeme seznam objektových souborů (main.o, lib1.o, ...)
OBJS = $(SRCS:.c=.o)

# jméno výsledného spustitelného souboru
TARGET = CLICulator

all: $(TARGET)

# pravidlo pro spojení objektových souborů do spustitelného programu
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# pravidlo pro překlad jednotlivých .c souborů na .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	find . -name "*.o" -type f -exec rm -f {} +
