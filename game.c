/*
   This file is part of goldfisch.

   Copyright (C) 2024 Ivan Guerreschi <ivan.guerreschi.dev@gmail.com>.

   goldfisch is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   goldfisch is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with goldfisch.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include "ascii.h"
#include "color.h"
#include "game.h"

/* Function to clear the terminal screen */
void clear_terminal(void)
{
	/* Print escape sequences to clear screen
	 * and move cursor to home position */
	printf("\033[3J\033[H\033[2J");
}

/* Function to print a gold fish graphic */
void print_goldfisch(void)
{
	/* Print the GOLDFISCH macro in red color,
	 * followed by a reset sequence */
	printf("%s%s%s\n", RED, GOLDFISCH, RESET);
}

/* Function to print a gold fish died graphic */
void print_goldfisch_died(void)
{
	/* Print the GOLDFISHDIED macro in red color,
	 * followed by a reset sequence */
	printf("%s%s%s\n", RED, GOLDFISCHDIED, RESET);
}

/* Function to execute the game */
int exec(void)
{
	clear_terminal();
	print_goldfisch();
	return 0;
}
