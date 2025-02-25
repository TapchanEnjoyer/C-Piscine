MY_VAR = string

MY_OTHER_VAR = hello $(MY_VAR)

MY_OTHER_VAR += "bye!"

NAME = my_program

MY_SOURCES = ft_putchar.c \ main.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

CUR_DIR = $(shell pwd)

my_rule: sub_rule
	echo I am colmpiling $(MY_SOURCES)
sub_rule:
	echo I am in $(CUR_DIR)
	
