CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRC = Contact.cpp main.cpp PhoneBook.cpp

OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re fclean clean