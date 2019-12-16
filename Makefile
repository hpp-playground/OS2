fifo: fifo.c
	gcc fifo.c -o fifo

shortest: shortest.c
	gcc shortest.c -o shortest

test: fifo shortest
	./fifo < in.txt
	./shortest < in.txt