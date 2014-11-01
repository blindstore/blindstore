#ifndef __KEYGEN_H__
#define __KEYGEN_H__

struct blindstore_query_pk_t;
struct blindstore_query_sk_t;

struct blindstore_query_pk_t* blindstore_query_generate_pk(const struct blindstore_query_sk_t* sk);
struct blindstore_query_sk_t* blindstore_query_generate_sk(const unsigned int security, const unsigned int capacity);
void blindstore_query_free_pk(const struct blindstore_query_pk_t* pk);
void blindstore_query_free_sk(const struct blindstore_query_sk_t* sk);

char* blindstore_query_serialize_pk(struct blindstore_query_pk_t* pk);
char* blindstore_query_serialize_sk(struct blindstore_query_sk_t* sk);
struct blindstore_query_pk_t* blindstore_query_deserialize_pk(char* string);
struct blindstore_query_sk_t* blindstore_query_deserialize_sk(char* string);

#endif
