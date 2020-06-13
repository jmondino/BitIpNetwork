NAME1 = dtobx
NAME2 = ipv4tobx
NAME3 = nmfinder
NAME4 = fnlip

SRC1 = src/DtoBX/main.c\
		src/DtoBX/Parsing.c\
		src/DtoBX/convert.c
SRC2 = src/IPv4/main.c\
		src/IPv4/parsing.c\
		src/IPv4/convert.c\
		src/IPv4/print.c
SRC3 = src/NetMaskFinder/main.c\
		src/NetMaskFinder/parsing.c\
		src/NetMaskFinder/finder.c
SRC4 = src/FirstAndLast/main.c\
		src/FirstAndLast/parsing.c\
		src/FirstAndLast/calcul.c

OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)
OBJ4 = $(SRC4:.c=.o)

FLAGS = -Wextra -Werror -Wall

ifndef VERBOSE
.SILENT:
endif

all:dtobx ipv4tobx nmfinder fnlip

dtobx: $(OBJ1)
	gcc $(FLAGS) -o $(NAME1) $(OBJ1)
	rm -f $(OBJ1)
	echo "\033[32mdtobx compiled.\033[0m"

ipv4tobx: $(OBJ2)
	gcc $(FLAGS) -o $(NAME2) $(OBJ2)
	rm -f $(OBJ2)
	echo "\033[32mipv4tobx compiled.\033[0m"

nmfinder: $(OBJ3)
	gcc $(FLAGS) -o $(NAME3) $(OBJ3)
	rm -f $(OBJ3)
	echo "\033[32mnmfinder compiled.\033[0m"
fnlip: $(OBJ4)
	gcc $(FLAGS) -o $(NAME4) $(OBJ4)
	rm -f $(OBJ4)
	echo "\033[32mfnlip compiled.\033[0m"

clean:
	rm -f $(NAME1) $(NAME2) $(NAME3) $(NAME4)
	echo "\033[32mCleaned\033[0m"

re:clean all
