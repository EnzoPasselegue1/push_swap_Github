NAME			= push_swap

GREEN			= \033[0;32m
RED					= \033[0;31m
RESET			= \033[0m

CC 				= gcc

STANDARD_FLAGS 	= -Wall -Werror -Wextra -g3
VALGRIND		= @valgrind --leak-check=full --show-leak-kinds=all \
--track-origins=yes --quiet --tool=memcheck --keep-debuginfo=yes

REMOVE 			= rm -f

SRCS_DIR		= ./sources/

SRCS 			= $(addprefix $(SRCS_DIR),\
					algorithm.c \
					apply.c \
					check_sorted.c \
					find_place.c \
					ft_sort.c \
					initialization.c \
					push.c \
					reverse_rotate.c \
					rotate.c \
					swap.c \
					utils_ab.c \
					utils_ba.c \
					utils.c \
					utils2.c \
					checker.c \
					free.c \
                    main.c)

all:			${NAME}

${NAME}: 		
				${CC} ${SRCS} ${STANDARD_FLAGS} -o ${NAME}
				@echo "$(NAME): $(GREEN)$(NAME) was compiled.$(RESET)"
				@echo

clean:
				make clean
				@echo

fclean:
				${REMOVE} ${NAME} 
				@echo "${NAME}: ${RED}${NAME} were deleted${RESET}"
				@echo

re:				fclean all

run:			${NAME}
				${VALGRIND} ./${NAME} 5 6 45 85 12 45 65 78 12 56 78 45 12

.PHONY:			all clean fclean re valgrind run