//
// Created by malek on 4/27/22.
//
#include <flatbuffers/flexbuffers.h>
#pragma once
#ifdef __cplusplus
//C-Interface
extern "C" {
#endif
typedef struct flex_buff_reference {
    void *obj;
} flex_buff_reference;

typedef struct flex_buff_map {
    void *obj;
} flex_buff_map;
typedef struct flex_buff_string {
    void *obj;
} flex_buff_string;

    bool flex_buff_ref_IsMap(flex_buff_reference *r);
    flex_buff_map *flex_buff_ref_AsMap(flex_buff_reference *r);
    flex_buff_reference *flex_buff_get_ref_from_map(flex_buff_map *map, char *str);
    const char *flex_buff_string_c_string(flex_buff_string *s);

    const char *flex_buff_ref_c_string(flex_buff_reference *r);

    bool flex_buff_ref_IsUInt(flex_buff_reference *r);
    int flex_buff_ref_AsUInt8(flex_buff_reference *r);
    int flex_buff_ref_AsUInt32(flex_buff_reference *r);

    bool flex_buff_ref_IsString(flex_buff_reference *r);
    flex_buff_string *flex_buff_ref_AsString(flex_buff_reference *r);

#ifdef __cplusplus
}
static flex_buff_reference *createFromFlexBuffReference(flexbuffers::Reference ref) {
    flex_buff_reference *flex;
    flex = (flex_buff_reference *)(malloc(sizeof(*flex)));
    flex->obj = &ref;
    return flex;
}
static void deleteFromFlexBuffReference(flex_buff_reference *ref) {
    free(ref);
}
static flex_buff_map *createFromFlexBuffMap(flexbuffers::Map map) {
    flex_buff_map *flex;
    flex = (flex_buff_map *)(malloc(sizeof(*flex)));
    flex->obj = &map;
    return flex;
}
static void deleteFromFlexBuffMap(flex_buff_map *map) {
    free(map);
}

#endif