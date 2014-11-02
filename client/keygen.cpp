#include "she.h"

using namespace std;

struct blindstore_query_pk_t {
    she_public_key_t* she_pk;
};

struct blindstore_query_sk_t {
    she_private_key_t* she_sk;
};

blindstore_query_pk_t* _make_pk(she_public_key_t* she_pk) {
    auto pk = new blindstore_query_pk_t();
    pk->she_pk = she_pk;
    return pk;
}

blindstore_query_sk_t* _make_sk(she_private_key_t* she_sk) {
    auto sk = new blindstore_query_sk_t();
    sk->she_sk = she_sk;
    return sk;
}

struct blindstore_query_pk_t* blindstore_query_generate_pk(const struct blindstore_query_sk_t* sk) {
    return _make_pk(she_generate_public_key(sk->she_sk));
}

struct blindstore_query_sk_t* blindstore_query_generate_sk(const unsigned int security, const unsigned int capacity) {
    return _make_sk(she_generate_private_key(security, capacity));
}

void blindstore_query_free_pk(const struct blindstore_query_pk_t* pk){
    she_free_public_key(pk->she_pk);
}

void blindstore_query_free_sk(const struct blindstore_query_sk_t* sk) {
    she_free_private_key(sk->she_sk);
}

char* blindstore_query_serialize_pk(struct blindstore_query_pk_t* pk) {
    return she_serialize_public_key(pk->she_pk);
}

char* blindstore_query_serialize_sk(struct blindstore_query_sk_t* sk) {
    return she_serialize_private_key(sk->she_sk);
}

struct blindstore_query_pk_t* blindstore_query_deserialize_pk(char* string) {
    return _make_pk(she_deserialize_public_key(string));
}

struct blindstore_query_sk_t* blindstore_query_deserialize_sk(char* string) {
    return _make_sk(she_deserialize_private_key(string));
}
