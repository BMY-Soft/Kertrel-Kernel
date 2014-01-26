/*	A part of kestrel
	Kestrel Kernel Project
	Copyright 2007-2014 BMY-Soft
	Copyright 2007-2014 PC GO Ld.

	This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
*/

#include <kestrel/kernel.h>
#include <kestrel/shell.h>

extern int argstest_command(int, char **);
extern int echo_command(int, char **);
extern int panic_command(int, char **);
extern int date_command(int, char**);

static command_t c_argstest = { "argstest", argstest_command, "argstest [<args>]" };
static command_t c_date = { "date", date_command, "date [<option>] ... [+<format>]" };
static command_t c_echo = { "echo", echo_command, "echo [-ne] <args>" };
static command_t c_panic = { "panic", panic_command, "panic <message> [<status>]" };

command_t *command_table[] = {
	&c_argstest,
	&c_date,
	&c_echo,
	&c_panic,
	NULL
};