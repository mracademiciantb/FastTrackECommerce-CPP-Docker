// include/handlers/homepage_handler.h
#ifndef PRODUCTS_HANDLER_H
#define PRODUCTS_HANDLER_H

#include <event2/event.h>
#include <event2/http.h>
#include <event2/buffer.h>
#include <event2/http_struct.h>

void products_handler(evhttp_request *req, void *arg);

#endif // HOMEPAGE_HANDLER_H
