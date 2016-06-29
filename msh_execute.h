#ifndef MSH_EXEC_H
#define MSH_EXEC_H

#include <sys/types.h>
#include "msh.h"

// Builtin function
typedef int (*cmd_func)(cmd const*);

int run_cmd(cmd *const c);
int initialize_internals(void);
void free_cmds(cmd *crawler);

#endif
