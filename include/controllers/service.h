#ifndef _CONTROLLERS_SERVICE_H_
#define _CONTROLLERS_SERVICE_H_

#define VERSION_BUFFER_SIZE		64

struct _HttpResponse;

extern struct _HttpResponse *missing_values;

extern struct _HttpResponse *things_works;
extern struct _HttpResponse *current_version;

extern unsigned int things_service_init (void);

extern void things_service_end (void);

#endif