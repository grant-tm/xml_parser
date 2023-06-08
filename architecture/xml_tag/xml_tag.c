#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../xml_attribute_list/xml_attribute_list.h"
#include "xml_tag.h"

#define MAX_NAME_LENGTH (size_t) 127

typedef struct xml_tag {
    char* name;
    xml_attribute_list* attributes;
} xml_tag;

/* CREATE, INITIALIZE, DESTROY */
xml_tag* xml_tag_create(){
    xml_tag* tag = malloc(sizeof(tag));
    return tag;
}

xml_tag* xml_tag_initialize(xml_tag* tag){
    return tag;   
}

void xml_tag_destroy(xml_tag* tag){
    free(tag);
}

/* GETTERS */
char* xml_tag_get_name(xml_tag* tag){
    if(tag->name){
        return tag->name;
    }
    return NULL;
}

/* SETTERS */
xml_tag* xml_tag_set_name(xml_tag* tag, char* new_name){
    
    if(!new_name){
        return NULL;
    }

    size_t new_size;
    if(strlen(new_name) >= MAX_NAME_LENGTH)
        new_size = MAX_NAME_LENGTH;
    else
        new_size = strlen(new_name)+1;

    char* successful_resize = (char*) realloc(tag->name, new_size);
    if(!successful_resize){
        fprintf(stderr, "Error: tag name resize failed.\n");
        return NULL;
    }
    tag->name = successful_resize;
    memset(tag->name, '\0', new_size);
    strncpy(tag->name, new_name, new_size-1);
    return tag;
}


