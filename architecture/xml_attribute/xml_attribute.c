#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xml_attribute.h"

#define MAX_NAME_LENGTH (size_t) 127
#define MAX_VALUE_LENGTH (size_t) 127

typedef struct xml_attribute {
    char* name;
    char* value;
} xml_attribute;

/* CREATE, INITIALIZE, DESTROY */

xml_attribute* xml_attribute_create(){
    xml_attribute* attribute = malloc(sizeof(xml_attribute)); 
    attribute->name = malloc(sizeof(char));
    attribute->value = malloc(sizeof(char));  
    return attribute;
}

xml_attribute* xml_attribute_initialize(xml_attribute* attribute){
    memset(attribute->name, '\0', sizeof(char));
    memset(attribute->value, '\0', sizeof(char));
    return attribute;   
}

void xml_attribute_destroy(xml_attribute* attribute){
    free(attribute->name);
    free(attribute->value);
    free(attribute);
}

/* GETTERS */

char* xml_attribute_get_name(xml_attribute* attribute){
    return attribute->name;
}

char* xml_attribute_get_value(xml_attribute* attribute){
    return attribute->value;
}

/* SETTERS */

void* xml_attribute_set_name(xml_attribute* attribute, char* new_name){
    
    if(!new_name){
        return NULL;
    }

    size_t new_size;
    if(strlen(new_name) >= MAX_NAME_LENGTH)
        new_size = MAX_NAME_LENGTH;
    else
        new_size = strlen(new_name)+1;

    char* successful_resize = (char*) realloc(attribute->name, new_size);
    if(!successful_resize){
        fprintf(stderr, "Error: attribute name resize failed.\n");
        return NULL;
    }
    attribute->name = successful_resize;
    memset(attribute->name, '\0', new_size);
    strncpy(attribute->name, new_name, new_size-1);
    return attribute;
}

void* xml_attribute_set_value(xml_attribute* attribute, char* new_value){
    
    if(!new_value){
        return NULL;
    }

    size_t new_size;
    if(strlen(new_value) >= MAX_VALUE_LENGTH)
        new_size = MAX_VALUE_LENGTH;
    else
        new_size = strlen(new_value)+1;

    char* successful_resize = (char*) realloc(attribute->value, new_size);
    if(!successful_resize){
        fprintf(stderr, "Error: attribute value resize failed.\n");
        return NULL;
    }
    attribute->value = successful_resize;
    memset(attribute->value, '\0', new_size);
    strncpy(attribute->value, new_value, new_size-1);
    return attribute;
}
