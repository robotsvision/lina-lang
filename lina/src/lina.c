#include <lina.h>

LMAIN(LINA_ARGC, LINA_ARGV) {
    if(!lstd_init()) { lexit(LINA_EXIT_FAILURE); }
    lstdout_set_color(LINA_LABEL_COLOR);
    lstdout_str(l("Lina API test"), 14);
    lexit(LINA_EXIT_SUCCESS);
}