#include <string.h>
#include <stdio.h>
#include <gnumake.h>

#define ANSWER_ARGUMENTS 0 
#define ANSWER_FLAGS GMK_FUNC_NOEXPAND

int plugin_is_GPL_compatible;

char *
make_answer(const char *nm, unsigned int argc, char **argv)
{
        char *buf = gmk_alloc(3);
        strcpy(buf, "42\0");
        return buf;
}

int
answer_gmk_setup ()
{
        gmk_add_function("answer",
                        make_answer,
                        ANSWER_ARGUMENTS,
                        ANSWER_ARGUMENTS, 
                        ANSWER_FLAGS);
        return 1;
}
