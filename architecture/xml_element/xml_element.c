#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xml_element.h"

typedef enum xml_element_type {
    XML_STR,
    XML_ELE;
};

typedef struct xml_element {
    xml_tag* tag;
    xml_element_type type;
    char* string_value;
    xml_element* element_value[];
};

/* CREATE, INITIALIZE, DESTROY */
xml_element* xml_element_create(){
    xml_element* element = malloc(sizeof(element));
    return element;
}

xml_element* xml_element_initialize(xml_element* element){
    return element;   
}

void xml_element_destroy(xml_element* element){
    free(element);
}

/* GETTERS */


/* SETTERS */
