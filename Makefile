	

project: switchmain.o strfun2.o
	gcc -o project switchmain.o strfun2.o 
   
switchmain.o: switchmain.c stringh.h
	gcc -c switchmain.c

strfun2.o: strfun2.c stringh.h
	gcc -c strfun2.c

clean: 
	rm *.o


