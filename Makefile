fifo: fifo.c
	gcc fifo.c -o fifo

test: fifo
	./fifo < in.txt