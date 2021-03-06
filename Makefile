# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: aaugusti <aaugusti@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/29 14:26:30 by aaugusti      #+#    #+#                  #
#    Updated: 2020/10/29 14:26:30 by aaugusti      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	liblist.a

SRCS			=	\
					destroy\
					find_parent\
					foreach\
					last\
					new\
					new_back\
					new_front\
					remove\
					reverse\
					size\


CFILES			=	$(SRCS:%=lst_%.c)
OFILES			=	$(SRCS:%=lst_%.o)

FLAGS			=	-Wall -Werror -Wextra

AR_COMMAND		= ar rs

all: $(NAME)

$(NAME): $(OFILES)
	$(AR_COMMAND) $(NAME) $(OFILES)

%.o: %.c
	gcc -o $@ -c $< $(FLAGS)

clean: _clean

fclean: _clean
	rm -f $(NAME) test

_clean:
	@rm -f $(OFILES) test.o

re: fclean all

test: $(OFILES) test.o
	gcc -o test $(FLAGS) $(OFILES) test.o -fsanitize=address
