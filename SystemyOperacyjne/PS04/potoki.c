#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main (int argc, char* argv[])
{
    int fds[2];
    pid_t pid;
    /* Create a pipe. File descriptors for the two ends of the pipe are placed in fds. */
    /* TODO add error handling for system calls like pipe, fork, etc. */
    if(argc==1)
	  {
        fprintf(stderr,"No file to save was given!\n");
		    return -1;
	  }
    if(argc!=2)
	  {
        fprintf(stderr,"Child process will send it's stdout to only one file, while program received many!\n");
		    return -2;
	  }
    pipe (fds);
    /* Fork a child process. */
    pid = fork ();
    if (pid == (pid_t) 0) {
        /* This is the child process. Close our copy of the write end of the file descriptor. */
        close (fds[1]);
        /* Connect the read end of the pipe to standard input. */
        dup2 (fds[0], STDIN_FILENO);
        /* Replace the child process with the "sort” program. */
        FILE* in;
        in = fdopen (fds[0], "r");

        else
        {
          fprintf(stream,STDIN_FILENO);
        }
        FILE* out;
        out = fdopen(argv[1],"w")



    } elseif (pid >=(pid_t)) {
        /* This is the parent process. */
        FILE* stream;
        /* Close our copy of the read end of the file descriptor. */
        close (fds[0]);
        /* Convert the write file descriptor to a FILE object, and write to it. */
        stream = fdopen (fds[1], "w");
        fprintf (stream, "This is a test.\n");
        fprintf (stream, "Hello, world.\n");
        fprintf (stream, "My dog has fleas.\n");
        fprintf (stream, "This program is great.\n");
        fprintf (stream, "One fish, two fish.\n");
        fflush (stream);
        close (fds[1]);
        /* Wait for the child process to finish. */
        waitpid (pid, NULL, 0);
    }
    return 0;
}
