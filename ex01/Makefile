# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 16:54:24 by omartela          #+#    #+#              #
#    Updated: 2025/01/14 16:54:26 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++

TARGET = ScavTrap
INC_DIR = inc
SRC = src/ClapTrap.cpp src/ScavTrap.cpp src/main.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(COMPILER) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ) $(TARGET)

re: clean all
