#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xml_element.h"
#include "xml_element_value.h"
#include "xml_tag.h"

typedef struct xml_element{
    xml_tag* tag;
    xml_element_value value;
};

/* CREATE, INITIALIZE, DESTROY */
xml_element* xml_element_create(){
    xml_element* element = malloc(sizeof(element));
    xml_element_tag_create(xml_element->tag);
    xml_element_value_create(xml_element->value);
    return element;
}

xml_element* xml_element_initialize(xml_element* element){   
    xml_tag_initialize(element->tag);
    xml_value_initialize(element->value);
    return element;   
}

void xml_element_destroy(xml_element* element){
    xml_tag_destroy(element->tag);
    xml_value_destroy(element->value);
    free(element);
}

/* GETTERS */
xml_tag* xml_element_get_tag(xml_element* element){
    return element->tag;
}

xml_value* xml_element_get_value(xml_element* element){
    return element->value;
}

/* SETTERS */
void xml_element_set_tag(xml_element* element, xml_tag* new_tag){
    if(new_tag){
        element->tag = new_tag;
    }
}

void xml_element_set_value(xml_element* element, xml_value* new_value){
    if(new_value){
        element->value = new_value;
    }
}
