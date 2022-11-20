CC=gcc
FLAGS=-Wall -g

all:libclassrec.so libclassrec.a libclassloops.so libclassloops.a maindloop maindrec mains recursived loopd recursives loops

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) main.o -o $@ -L. -lclassloops
maindrec:main.o libclassrec.so
	$(CC) $(FLAGS) main.o -o $@ -lclassrec -L.
mains: main.o libclassrec.a
	$(CC) $(FLAGS) main.o -o $@ -lclassrec -L.

libclassloops.a: advancedClassificationloop.o  basicClassification.o
	ar -rcs libclassloops.a advancedClassificationloop.o  basicClassification.o
libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	$(CC) -shared -o  libclassrec.so advancedClassificationRecursion.o basicClassification.o
libclassloops.so: advancedClassificationloop.o  basicClassification.o
	$(CC) -shared -o libclassloops.so advancedClassificationloop.o  basicClassification.o

loops:libclassloops.a main.o
	$(CC) $(FLAGS)  main.o libclassloops.a  -o $@
recursives:libclassrec.a main.o
	$(CC) $(FLAGS)  main.o libclassrec.a  -o $@
recursived:libclassrec.so main.o
	$(CC) $(FLAGS)  main.o libclassrec.so  -o $@
loopd:libclassloops.so main.o
	$(CC) $(FLAGS) main.o libclassloops.so  -o $@



main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

.PHONY:clean all
clean:
	rm -f *.o *.a *.so maindloop maindrec mains loopd loops recursives recursived

