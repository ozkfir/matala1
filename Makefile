CC=gcc
FLAGS=-Wall -g

all:libclassrec.so libclassrec.a libclassloops.so libclassloops.a maindloop maindrec mains recursived loopd recursives loops

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) main.o -o $@ -L. -lclassloops
maindrec:main.o libclassrec.so
	$(CC) $(FLAGS) main.o -o $@ -lclassrec -L.
mains: main.o libclassrec.a
	$(CC) $(FLAGS) main.o -o $@ -lclassrec -L.

loops:libclassloops.a

recursives:libclassrec.a

recursived:libclassrec.so

loopd:libclassloops.so


libclassloops.a: advancedClassificationloop.o  basicClassification.o
	ar -rcs libclassloops.a advancedClassificationloop.o  basicClassification.o
libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	$(CC) -shared advancedClassificationRecursion.o basicClassification.o -o  libclassrec.so
libclassloops.so: advancedClassificationloop.o  basicClassification.o
	$(CC) -shared -o libclassloops.so advancedClassificationloop.o  basicClassification.o



advancedClassificationRecursion.o:advancedClassificationRecursion.c
	$(CC) $(FLAGS) -fPIC -c advancedClassificationRecursion.c
advancedClassificationloop.o:advancedClassificationloop.c
	$(CC) $(FLAGS) -fPIC -c advancedClassificationloop.c
basicClassification.o:basicClassification.c
	$(CC) $(FLAGS) -fPIC -c basicClassification.c

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

.PHONY:clean all
clean:
	rm -f *.o *.a *.so maindloop maindrec mains loopd loops recursives recursived

