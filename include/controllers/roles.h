#ifndef _THINGS_ROLES_H_
#define _THINGS_ROLES_H_

#include <stdbool.h>

#include <bson/bson.h>

#include "models/role.h"

extern unsigned int things_roles_init (void);

extern void things_roles_end (void);

extern const Role *things_roles_get_by_oid (
	const bson_oid_t *role_oid
);

extern const Role *things_roles_get_by_name (
	const char *role_name
);

extern const char *things_roles_name_get_by_oid (
	const bson_oid_t *role_oid
);

extern bool things_role_search_and_check_action (
	const char *role_name, const char *action_name
);

#endif