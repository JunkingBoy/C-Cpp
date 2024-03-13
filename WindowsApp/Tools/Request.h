#ifndef REQUEST_H
#define REQUEST_H

#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <windows.h>

size_t write_call_back(void *ptr, size_t size, size_t nmemb, void *stream);
double send_get_request(const char *url);
double send_post_request(const char *url, const char *body, const char *content_type);

#endif /* REQUEST_H */