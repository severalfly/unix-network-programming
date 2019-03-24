include ../Make.defines

PROGS =	tcpcli01.0 tcpcli04.0 tcpcli05.0 tcpcli06.0 \
		tcpcli07.0 tcpcli08.0 tcpcli09.0 tcpcli10.0 \
		tcpserv01.0 tcpserv02.0 tcpserv03.0 tcpserv04.0 \
		tcpserv08.0 tcpserv09.0 tcpservselect01.0 tcpservpoll01.0 tsigpipe

all:	${PROGS}

tcpcli01.0:	tcpcli01.o
		${CC} ${CFLAGS} -o $@ tcpcli01.o ${LIBS}

tcpcli04.0:	tcpcli04.o
		${CC} ${CFLAGS} -o $@ tcpcli04.o ${LIBS}

tcpcli05.0:	tcpcli05.o
		${CC} ${CFLAGS} -o $@ tcpcli05.o ${LIBS}

tcpcli06.0:	tcpcli06.o
		${CC} ${CFLAGS} -o $@ tcpcli06.o ${LIBS}

tcpcli07.0:	tcpcli07.o
		${CC} ${CFLAGS} -o $@ tcpcli07.o ${LIBS}

tcpcli08.0:	tcpcli08.o str_cli08.o
		${CC} ${CFLAGS} -o $@ tcpcli08.o str_cli08.o ${LIBS}

tcpcli09.0:	tcpcli09.o str_cli09.o
		${CC} ${CFLAGS} -o $@ tcpcli09.o str_cli09.o ${LIBS}

tcpcli10.0:	tcpcli10.o
		${CC} ${CFLAGS} -o $@ tcpcli10.o ${LIBS}

tcpcli11.0:	tcpcli11.o str_cli11.o
		${CC} ${CFLAGS} -o $@ tcpcli11.o str_cli11.o ${LIBS}

tcpserv01.0:	tcpserv01.o
		${CC} ${CFLAGS} -o $@ tcpserv01.o ${LIBS}

tcpserv02.0:	tcpserv02.o sigchldwait.o
		${CC} ${CFLAGS} -o $@ tcpserv02.o sigchldwait.o ${LIBS}

tcpserv03.0:	tcpserv03.o sigchldwait.o
		${CC} ${CFLAGS} -o $@ tcpserv03.o sigchldwait.o ${LIBS}

tcpserv04.0:	tcpserv04.o sigchldwaitpid.o
		${CC} ${CFLAGS} -o $@ tcpserv04.o sigchldwaitpid.o ${LIBS}

tcpserv08.0:	tcpserv08.o str_echo08.o sigchldwaitpid.o
		${CC} ${CFLAGS} -o $@ tcpserv08.o str_echo08.o sigchldwaitpid.o \
			${LIBS}

tcpserv09.0:	tcpserv09.o str_echo09.o sigchldwaitpid.o
		${CC} ${CFLAGS} -o $@ tcpserv09.o str_echo09.o sigchldwaitpid.o \
			${LIBS}

tcpservselect01.0:	tcpservselect01.o
		${CC} ${CFLAGS} -o $@ tcpservselect01.o ${LIBS}

tcpservpoll01.0:	tcpservpoll01.o
		${CC} ${CFLAGS} -o $@ tcpservpoll01.o ${LIBS}

tsigpipe.0:	tsigpipe.o
		${CC} ${CFLAGS} -o $@ tsigpipe.o ${LIBS}

clean:
		rm -f ${PROGS} ${CLEANFILES}
