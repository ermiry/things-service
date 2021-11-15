#include <stdlib.h>

#include <cerver/http/http.h>
#include <cerver/http/request.h>
#include <cerver/http/response.h>

#include "controllers/service.h"

// GET /api/things
void things_main_handler (
	const HttpReceive *http_receive,
	const HttpRequest *request
) {

	(void) http_response_send (things_works, http_receive);

}

// GET /api/things/version
void things_version_handler (
	const HttpReceive *http_receive,
	const HttpRequest *request
) {

	(void) http_response_send (current_version, http_receive);

}

// GET *
void things_catch_all_handler (
	const HttpReceive *http_receive,
	const HttpRequest *request
) {

	(void) http_response_send (not_found_error, http_receive);

}
