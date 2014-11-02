#ifndef __CLIENT_H__
#define __CLIENT_H__

char* generate_query(const char* key, const unsigned int capacity, const char* she_secret_key);
char* resolve_answer(const char* encrypted_answer);

#endif
