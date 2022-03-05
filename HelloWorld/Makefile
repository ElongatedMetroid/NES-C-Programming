.PHONY: all clean

NAME = helloworld.nes

CFLAGS = -t nes -Oisr
CC = cl65

SRC = $(wildcard *.c)
SRC += $(wildcard ../neslib/*.s)

OBJ = $(SRC:.c=.o)
OBJ := $(OBJ:.s=.o)
OBJ := $(OBJ:.s=../neslib/.o)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

%.o: %.s
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

$(OBJ): $(wildcard *.h *.sinc)

clean:
	rm -f $(NAME) *.o
