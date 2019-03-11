include ../Make.defines

PROGS =	daytimetcpcli.0 daytimetcpcli1.0 daytimetcpcli2.0 daytimetcpcli3.0 \
		daytimetcpsrv.0 daytimetcpsrv1.0 daytimetcpsrv2.0 daytimetcpsrv3.0 \
		daytimetcpcliv6.0 daytimetcpsrvv6.0 \
		byteorder.0

all:	${PROGS}

daytimetcpcli.0:	daytimetcpcli.o
		${CC} ${CFLAGS} -o $@ daytimetcpcli.o ${LIBS}

daytimetcpcli1.0:	daytimetcpcli1.o
		${CC} ${CFLAGS} -o $@ daytimetcpcli1.o ${LIBS}

daytimetcpcli2.0:	daytimetcpcli2.o
		${CC} ${CFLAGS} -o $@ daytimetcpcli2.o ${LIBS}

daytimetcpcli3.0:	daytimetcpcli3.o
		${CC} ${CFLAGS} -o $@ daytimetcpcli3.o ${LIBS}

daytimetcpsrv.0:	daytimetcpsrv.o
		${CC} ${CFLAGS} -o $@ daytimetcpsrv.o ${LIBS}

daytimetcpsrv1.0:	daytimetcpsrv1.o
		${CC} ${CFLAGS} -o $@ daytimetcpsrv1.o ${LIBS}

daytimetcpsrv2.0:	daytimetcpsrv2.o
		${CC} ${CFLAGS} -o $@ daytimetcpsrv2.o ${LIBS}

daytimetcpsrv3.0:	daytimetcpsrv3.o
		${CC} ${CFLAGS} -o $@ daytimetcpsrv3.o ${LIBS}

daytimetcpcliv6.0:	daytimetcpcliv6.o
		${CC} ${CFLAGS} -o $@ daytimetcpcliv6.o ${LIBS}

daytimetcpsrvv6.0:	daytimetcpsrvv6.o
		${CC} ${CFLAGS} -o $@ daytimetcpsrvv6.o ${LIBS}

byteorder.0:	byteorder.o
		${CC} ${CFLAGS} -o $@ byteorder.o ${LIBS}

clean:
		rm -f ${PROGS} ${CLEANFILES}
