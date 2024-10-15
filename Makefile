# This file is part of goldfisch.
#
# Copyright (C) 2024 Ivan Guerreschi <ivan.guerreschi.dev@gmail.com>.
#
# goldfisch is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# goldfisch is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with goldfisch.  If not, see <http://www.gnu.org/licenses/>.

CC = gcc
CFLAGS = -ggdb -Wall -Wextra

SRC = game.c goldfisch.c
OBJ = $(SRC:.c=.o)
EXEC = goldfisch

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
