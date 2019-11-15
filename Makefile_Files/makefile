vpath %.h ./Inc
vpath %.c ./Scr
vpath %.o ./Dependencies

cc = gcc_S

LINK_TARGET = App.exe
Obj = main.o LCD.o DIO.o code.o
SRC_PATH = ./Scr/
INCLUDE_PATH = ./Inc/
OBJDIR = ./Dependencies/
oob = $(OBJDIR)main.o $(OBJDIR)LCD.o $(OBJDIR)DIO.o $(OBJDIR)code.o




clean : 
	-rm $(LINK_TARGET) $(oob)
	
all : $(LINK_TARGET)

$(LINK_TARGET) : $(Obj)
	$(cc) $(oob) -o App.exe
	
main.o : main.c main.h LCD.h DIO.h
	$(cc) -c -I$(INCLUDE_PATH) $< -o $(OBJDIR)$@
	
LCD.o : LCD.c LCD.h DIO.h
	$(cc) -c -I$(INCLUDE_PATH) $< -o $(OBJDIR)$@
	
DIO.o : DIO.c DIO.h code.h
	$(cc) -c -I$(INCLUDE_PATH) $< -o $(OBJDIR)$@
	
code.o : code.c   code.h
	$(cc) -c -I$(INCLUDE_PATH) $< -o $(OBJDIR)$@
	
	
