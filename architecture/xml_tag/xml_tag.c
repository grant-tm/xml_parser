#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xml_attribute_set.h"
#include "xml_tag.h"

typedef struct xml_tag {
    char* name;
    xml_attribute_set* attributes;
};

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


/* SETTERS */
