#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../xml_attribute/xml_attribute.h"
#include "xml_attribute_list.h"

typedef struct xml_attribute_list {
    int num_attributes;
    xml_attribute** attributes;
} xml_attribute_list;

/* CREATE, INITIALIZE, DESTROY */
xml_attribute_list* xml_attribute_list_create(){
    xml_attribute_list* list = malloc(sizeof(xml_attribute_list));
    list->attributes = (xml_attribute**) malloc(sizeof(xml_attribute**));
    return list;
}

xml_attribute_list* xml_attribute_list_initialize(xml_attribute_list* list){
    list->num_attributes = 0;
    return list;   
}

void xml_attribute_list_destroy(xml_attribute_list* list){
    while(list->num_attributes > 0){
        xml_attribute* attribute_to_destroy = list->attributes[--list->num_attributes];
        xml_attribute_destroy(attribute_to_destroy);
    }
    free(list->attributes);
    free(list);
}

/* GETTERS */


/* SETTERS */
