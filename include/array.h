#ifndef __ARRAY_H__
#define __ARRAY_H__

struct blindstore_array_t;

blindstore_array_t* blindstore_array_make();
void blindstore_array_free();
void blindstore_array_get();
void blindstore_array_put();
void blindstore_array_delete();
void blindstore_array_update();
void blindstore_array_dump();
void blindstore_array_load();

#endif
