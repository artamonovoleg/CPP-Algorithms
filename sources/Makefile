CC = g++
OUT_FILE_NAME = libalgo.a

CFLAGS = -O0 -g -Wall -c -fpermissive

INC = -I./sources

OBJ_DIR = ../obj

OUT_DIR = ../lib

$(OUT_FILE_NAME): $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(wildcard *.cpp))
	ar rcs $(OUT_DIR)/$@ $^

$(OBJ_DIR)/%.o: %.cpp dirmake
	$(CC) -c $(INC) $(CFLAGS) -o $@  $<
	
dirmake:
	@mkdir -p $(OUT_DIR)
	@mkdir -p $(OBJ_DIR)
	
clean:
	rm -f $(OBJ_DIR)/*.o $(OUT_DIR)/$(OUT_FILE_NAME) Makefile.bak

rebuild: clean build