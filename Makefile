# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:      :+:    :+:    #
#                                                      +:+                     #
#    By: aaugusti <aaugusti@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/29 11:05:37 by aaugusti       #+#    #+#                 #
#    Updated: 2020/01/14 10:04:01 by abe              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	liblist.a

SRCS			=	foreach\
					new\
					new_back\
					new_front\
					remove\
					reverse\
					size


CFILES			=	$(SRCS:%=lst_%.c)
OFILES			=	$(SRCS:%=lst_%.o)

FLAGS			=	-Wall -Werror -Wextra

AR_COMMAND		= ar rs

all: $(NAME)

$(NAME): $(OFILES)
	@echo "🔗 Linking lib"
	@$(AR_COMMAND) $(NAME) $(OFILES)
	@echo "✅ Done"

%.o: %.c
	@echo "👾 Compiling: $<"
	@gcc -o $@ -c $< $(FLAGS)

clean: _clean
	@echo "🧽  Cleaning..."

fclean: _clean
	@echo "🛀 Cleaning..."
	@rm -f $(NAME) test

_clean:
	@rm -f $(OFILES) test.o

re: fclean all

test: $(OFILES) test.o
	@echo "Compiling tests with lib..."
	@gcc -o test $(FLAGS) $(OFILES) test.o -fsanitize=address

vela:
	@echo "\033[0;31m"
	@echo "\t _    __________    ___ "
	@echo "\t| |  / / ____/ /   /   |"
	@echo "\t| | / / __/ / /   / /| |"
	@echo "\t| |/ / /___/ /___/ ___ |"
	@echo "\t|___/_____/_____/_/  |_|\n"
	@echo "\033[0m"
	@echo "   )__                     (__   ____)"
	@echo "    _ )_                      (____)"
	@echo "  __    )__            |>>>"
	@echo "     ______)          /|             ___"
	@echo "  _____)             / |\        ___(   )__"
	@echo "                    /  | \      (_       __)"
	@echo "                   /   |  \       (_  ___)"
	@echo "                  /    |   \       (___)"
	@echo "                 /     |    \\"
	@echo "                /______|_____\\"
	@echo "                    ___|__"
	@echo "            _______/ooo__\\______/~"
	@echo "            \                   |]"
	@echo "  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
	@echo "   ~~~~         ~~~~~~ ~~~  ///  ~~~~~"
	@echo "    ~~~~~  ~~~   ~~~   ___  \_/ ~~~~~   ~~~~"
	@echo "     ~~~     (()))    ///\\ \ \   ~~~~~~~~"
	@echo "            )))((((  (///\\)/ /"
	@echo "   ~~~~  ~~ ((())))  _\___// / ~~~~~~~ ~~~"
	@echo "   ~~~~~~  /)))((((\/ _   _ /  ~~~~~   ~~~~"
	@echo "   ~~     / |\\_//| \~~ ~~~~~~~~ ~~"
	@echo "       ~~~~~~~~ ~~~~~~~~~ ~~~~~~ ~~~~~~"
	@echo "  ~~~~~ ~~~~~ ~~~~~~ ~~~~~   ~~~~~ ~~~~\n"
