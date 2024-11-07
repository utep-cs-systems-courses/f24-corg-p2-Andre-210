# makefile configuration
COMMON_OBJECTS =

CPU            = msp430g2553
CFLAGS         = -mmcu=${CPU} -I../h
LDFLAGS        = -L/opt/ti/msp430_gcc/include

# switch the compiler (for the internal rules)
CC             = msp430-elf-gcc
AS             = msp430-elf-as

all: uimain.elf

# additional rules for files
uimain.elf: ${COMMON_OBJECTS} uimain.o led.o switches.o statemachines.o wdInterrupthandler.o p2_interrupt_handler.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: uimain.elf
	msp430loader.sh uimain.elf

clean:
	rm -f *.o *.elf *~
