#include "she.h"


struct blindstore_query_pk_t {};
struct blindstore_query_sk_t {};


struct blindstore_query_pk_t* blindstore_query_generate_pk(const struct blindstore_query_sk_t* sk) {
    return dynamic_cast<blindstore_query_pk_t*>(she_generate_public_key(sk));
}

struct blindstore_query_sk_t* blindstore_query_generate_sk(const unsigned int security, const unsigned int capacity) {
    return dynamic_cast<blindstore_query_sk_t*>(she_generate_private_key(security, capacity));
}

void blindstore_query_free_pk(const struct blindstore_query_pk_t* pk){
    she_free_public_key(pk);
}

void blindstore_query_free_sk(const struct blindstore_query_sk_t* sk) {
    she_free_private_key(sk);
}

char* blindstore_query_serialize_pk(struct blindstore_query_pk_t* pk) {
    return she_serialize_public_key(pk);
}

char* blindstore_query_serialize_sk(struct blindstore_query_sk_t* sk) {
    return she_serialize_private_key(sk);
}

struct blindstore_query_pk_t* blindstore_query_deserialize_pk(char* string) {
    return dynamic_cast<blindstore_query_pk_t*>(she_deserialize_public_key(string));
}

struct blindstore_query_sk_t* blindstore_query_deserialize_sk(char* string) {
    return dynamic_cast<blindstore_query_sk_t*>(she_deserialize_private_key(string))
}
