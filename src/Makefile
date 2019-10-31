BK : saveBookMark.o deleteBookMark.o loadBookMark.o errorBookMark.o main.o 
	gcc -o BK saveBookMark.o deleteBookMark.o loadBookMark.o errorBookMark.o main.o

saveBookMark.o : saveBookMark.c
	gcc -c -o saveBookMark.o saveBookMark.c

deleteBookMark.o : deleteBookMark.c
	gcc -c -o deleteBookMark.o deleteBookMark.c

loadBookMark.o : loadBookMark.c
	gcc -c -o loadBookMark.o loadBookMark.c

errorBookMark.o : errorBookMark.c
	gcc -c -o errorBookMark.o errorBookMark.c

main.o : main.c
	gcc -c -o main.o main.c


clean : 
	rm *.o BK ../usr/.bookmark
