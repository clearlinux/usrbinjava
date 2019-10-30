/*
 *   usrbinjava - java wrapper
 *
 *      Copyright (C) 2015 Intel Corporation.
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, version 3, with OpenSSL-exception.
 *
 *   Alternatively, you can chose to redistribute and/or modifiy this
 *   software under the terms of the Apache-2.0 license as published
 *   by the Apache Software Foundation.
 *
 *   If you want to contribute code to this project using only one,
 *   instead of both, of these licenses, you need to remove the other
 *   license text from this file as part of your contribution.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *   Likewise, you should have received a copy of the Apache-2.0 license,
 *   which can also be found at http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Authors:
 *         Arjan van de Ven <arjan@linux.intel.com>
 *
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>


int main(int argc, char **argv)
{
	char java[4096];
	strcpy(java, "/usr/bin/false");

	return EXIT_SUCCESS;
}