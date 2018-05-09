CC=gcc
CFLAGS=-I. -O2
DEPS=linalg.h
OBJ=det_mat.o imprime_mat.o inverte_mat.o jacobi.o ler_mat.o multiplica_mat.o subsrev_mat.o triangluarizaSup_mat.o
TARGET=main
LIBS=-lm

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
rm $(OBJ)
