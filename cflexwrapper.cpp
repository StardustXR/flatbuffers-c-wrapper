//
// Created by malek on 4/27/22.
//
#include "cflexwrapper.h"

bool flex_buff_ref_IsMap(flex_buff_reference *r) {
    return static_cast<flexbuffers::Reference*>(r->obj)->IsMap();
}
flex_buff_map *flex_buff_ref_AsMap(flex_buff_reference *r) {
    return createFromFlexBuffMap(static_cast<flexbuffers::Reference*>(r->obj)->AsMap());
}
flex_buff_reference *flex_buff_get_ref_from_map(flex_buff_map *map, char *str) {
    flexbuffers::Map myMap = *static_cast<flexbuffers::Map*>(map->obj);
    return createFromFlexBuffReference(myMap[str]);
}
const char *flex_buff_string_c_string(flex_buff_string *s) {
    return static_cast<flexbuffers::String*>(s->obj)->c_str();
}

bool flex_buff_ref_IsUInt(flex_buff_reference *r) {
    return static_cast<flexbuffers::Reference*>(r->obj)->IsUInt();
}
int flex_buff_ref_AsUInt8(flex_buff_reference *r) {
    return static_cast<flexbuffers::Reference*>(r->obj)->AsUInt8();
}
int flex_buff_ref_AsUInt32(flex_buff_reference *r) {
    return static_cast<flexbuffers::Reference*>(r->obj)->AsUInt32();
}

bool flex_buff_ref_IsString(flex_buff_reference *r) {
    return static_cast<flexbuffers::Reference*>(r->obj)->IsString();
}
const char *flex_buff_ref_c_string(flex_buff_reference *r) {
    return static_cast<flexbuffers::Reference*>(r->obj)->AsString().c_str();
}