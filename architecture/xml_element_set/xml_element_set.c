#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xml_element.h"

typedef struct xml_element_set{
    int num_elements;
    xml_element* elements[];
};

/* CREATE, INITIALIZE, DESTROY */
xml_element_set* xml_element_set_create(){
    xml_element_set* element_set = malloc(sizeof(element_set));
    return element_set;
}

xml_element_set* xml_element_set_initialize(xml_element_set* element_set){
    return element_set;   
}

void xml_element_set_destroy(xml_element_set* element_set){
    free(element_set);
}

/* GETTERS */


/* SETTERS */
