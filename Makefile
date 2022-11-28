# E89 Pedagogical & Technical Lab
# project:     rev
# created on:  2022-11-22 - 09:32 +0100
# 1st author:  sokaneil.sieng - sokaneil.sieng
# description: Compiling

NAME	=	rev

SRCS	=	src/main.c		\
		src/reverse.c		\
		src/rev_in_order.c	\
		src/strlen.c 		\
		src/size_read.c		\
		src/strcmp.c		\
		src/strchr.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
