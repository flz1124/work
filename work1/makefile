mypro: main.o fun1.o fun2.o fun3.o
	gcc main.o fun1.o fun2.o fun3.o -o mypro
main.o: main.c
	gcc main.c -c
fun1.o: fun1.c
	gcc fun1.c -c
fun2.o: fun2.c
	gcc fun2.c -c
fileop.o: fileop.c
	gcc fileop.c -c
clean:
	rm -f *.o
