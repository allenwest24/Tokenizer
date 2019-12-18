#taken from Nat's lecture 09

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
HDRS := $(wildcard *.h)

tokens: $(OBJS)
	gcc -g -o tokens $(SRCS) $(HDRS)

$(OBJS): $(SRCS) $(HDRS)
	gcc -c -g -o $@ $<

clean:
	rm -f tmp tokens *.o

check:
	clang-check *.c --

