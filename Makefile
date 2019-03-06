PA3: mainPA3.c files.h init.o usage.o print.o pop.o stack_insert.o queue_insert.o clean.o
	gcc -o PA3 mainPA3.c init.o usage.o print.o pop.o stack_insert.o queue_insert.o clean.o

init.o: init.c files.h
	gcc -c init.c

usage.o: usage.c
	gcc -c usage.c

print.o: print.c files.h
	gcc -c print.c

pop.o: pop.c files.h
	gcc -c pop.c

stack_insert.o: stack_insert.c files.h
	gcc -c stack_insert.c

queue_insert.o: queue_insert.c files.h
	gcc -c queue_insert.c

clean.o: clean.c files.h
	gcc -c clean.c

debug: mainPA3.c files.h init.o usage.o print.o pop.o stack_insert.o queue_insert.o clean.o
	gcc -g -o PA3 mainPA3.c init.o usage.o print.o pop.o stack_insert.o queue_insert.o clean.o
