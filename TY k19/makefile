ifndef DEBUG
# Default: compile for debug
DEBUG=1
endif

CC = gcc

BASICFLAGS= -std=c99

DEBUGFLAGS=  -g 
OPTFLAGS= -g -finline -march=native -O3 -DNDEBUG

INCLUDE_PATH=-I. 

CFLAGS= -Wall -D_GNU_SOURCE $(BASICFLAGS)

ifeq ($(DEBUG),1)
CFLAGS+=  $(DEBUGFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
else
CFLAGS+=  $(OPTFLAGS) $(PROFFLAGS) $(INCLUDE_PATH)
endif

LIBS=-lfl
FLEX=flex
BISON=bison

#------------------------------------------
# app
#------------------------------------------

all: clean fb compiler  

fb : cgen.h  cgen.c 
	$(BISON) -d -v -r all bison.y
	$(FLEX) lex.l 
	$(CC) $(CFLAGS) -o compiler lex.yy.c bison.tab.c cgen.c $(LIBS)

test : 
	./compiler < correct2.tc > correct2.c

compiler: cgen.c bison.tab.h cgen.h
	$(CC) -o lex lex.yy.c $(LIBS) 

clean:
	-rm *.o bison.tab.h
	-rm bison.tab.c 
	-rm compiler