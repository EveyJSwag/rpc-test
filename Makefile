SERVER_EXEC := RPC_TEST_SERVER 
CLIENT_EXEC := RPC_TEST_CLIENT 
ALL_EXEC := $(SERVER_EXEC) $(CLIENT_EXEC)
DIRS := include/ src/ 
CLIENT_FILES := src/insane_program_client.c src/insane_program_clnt.c src/insane_program_xdr.c
CLIENT_OBJS  := src/insane_program_client.o src/insane_program_clnt.o src/insane_program_xdr.o
SERVER_FILES := src/insane_program_server.c src/insane_program_svc.c src/insane_program_xdr.c
SERVER_OBJS  := src/insane_program_server.o src/insane_program_svc.o src/insane_program_xdr.o
CLANG := clang
CLANG++ := clang++
INCLUDE := -I/Users/eveyj/Documents/RPC_TEST/include
GCC := gcc
G++ := g++

all : $(ALL_EXEC) 

$(SERVER_EXEC) : $(SERVER_OBJS)
	$(CLANG) $(INCLUDE) -g  -o $(SERVER_EXEC) $(SERVER_OBJS)

$(CLIENT_EXEC) : $(CLIENT_OBJS)
	$(CLANG) $(INCLUDE) -g  -o $(CLIENT_EXEC) $(CLIENT_OBJS)

%.o : %.c
	$(CLANG) $(INCLUDE) -g -c $< -o $@
		
.Phony: clean
clean:
	rm lib/*.o
	rm src/*.o
	rm $(EXEC)
