#ifndef NNG_SUPPLEMENTAL_NANOLIB_NANOLIB_H
#define NNG_SUPPLEMENTAL_NANOLIB_NANOLIB_H

#include "nng/supplemental/nanolib/conf.h"

extern void conf_tls_init(conf_tls *tls);
extern void conf_tls_destroy(conf_tls *tls);
extern void conf_tls_parse(
    conf_tls *tls, const char *path, const char *prefix1, const char *prefix2);

#endif //NNG_SUPPLEMENTAL_NANOLIB_NANOLIB_H