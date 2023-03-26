PROGRAM = sample
CFLAGS = -Wall -O2
INCDIR = -I/usr/include /usr/include/c++/9 ./
LIBDIR = 
LIBS = 
SRCS = sample.cpp sort.cpp
OBJS = $(SRCS:.cpp=.o)
CC = g++

$(PROGRAM): $(OBJS)
			$(CC) -o $@ $^ $(LIBDIR) $(LIBS)


$(OBJS): $(SRCS)
		 $(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

all: clean $(OBJS) $(PROGRAM)

clean: 
	-rm -f $(OBJS) $(PROGRAM) *.d
