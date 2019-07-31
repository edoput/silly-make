#include <string.h>
#include <stdio.h>
#include <gnumake.h>

#define ANSWER_MIN_ARGUMENTS 0
#define ANSWER_MAX_ARGUMENTS 1
#define ANSWER_FLAGS GMK_FUNC_NOEXPAND

int plugin_is_GPL_compatible;

char *
make_answer(const char *nm, unsigned int argc, char **argv)
{
        size_t question_lenght = strlen(*argv);
        char *buf = gmk_alloc(question_lenght + 4);
        strcpy(buf, *argv);
        strcat(buf, " 42\0");
        return buf;
}

int
answer_gmk_setup ()
{
        gmk_add_function("answer",
                        make_answer,
                        ANSWER_MIN_ARGUMENTS,
                        ANSWER_MAX_ARGUMENTS, 
                        ANSWER_FLAGS);
        return 1;
}
