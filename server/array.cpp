#include <iostream>

using namespace std;

struct blindstore_array_t {
    unsigned int length;
};

blindstore_array_t* blindstore_array_make() {
    return new blindstore_array_t();
}

void blindstore_array_free(blindstore_array_t* blindstore_array) {
    delete blindstore_array;
}

void blindstore_array_get() {

}

void blindstore_array_put() {

}

void blindstore_array_delete() {

}

void blindstore_array_update() {

}

void blindstore_array_dump() {

}

void blindstore_array_load() {

}
