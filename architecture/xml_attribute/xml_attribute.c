#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xml_attribute.h"

typedef struct xml_attribute {
    char* name;
    char* value;
};

/* CREATE, INITIALIZE, DESTROY */
xml_attribute* xml_attribute_create(){
    xml_attribute* attribute = malloc(sizeof(attribute));
    return attribute;
}

xml_attribute* xml_attribute_initialize(xml_attribute* attribute){
    return attribute;   
}

void xml_attribute_destroy(xml_attribute* attribute){
    free(attribute);
}

/* GETTERS */


/* SETTERS */
