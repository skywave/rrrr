#include "router.h"

uint32_t render_plan_json(struct plan *plan, tdata_t *tdata, char *buf, uint32_t buflen);

uint32_t render_itin_json_only(struct plan *plan, tdata_t *tdata, char *buf, uint32_t buflen);