fifo: fifo.c
	gcc fifo.c -o fifo

shortest: shortest.c
	gcc shortest.c -o shortest

roundrobin: roundrobin.c
	gcc roundrobin.c -o roundrobin

test: fifo shortest roundrobin
	./fifo < in.txt
	./shortest < in.txt
	./roundrobin < in.txt