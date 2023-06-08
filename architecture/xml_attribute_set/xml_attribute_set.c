#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xml_attribute.h"
#include "xml_attribute_set.h"

typedef struct xml_attribute_set {
    xml_attribute* attributes[];
};

/* CREATE, INITIALIZE, DESTROY */
xml_attribute_set* xml_attribute_set_create(){
    xml_attribute_set* attribute_set = malloc(sizeof(attribute_set));
    return attribute_set;
}

xml_attribute_set* xml_attribute_set_initialize(xml_attribute_set* attribute_set){
    return attribute_set;   
}

void xml_attribute_set_destroy(xml_attribute_set* attribute_set){
    free(attribute_set);
}

/* GETTERS */


/* SETTERS */
