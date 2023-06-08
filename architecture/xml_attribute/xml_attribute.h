#ifndef _XML_ATTRIBUTE_H
#define _XML_ATTRIBUTE_H

typedef struct xml_attribute xml_attribute;

/* CREATE, INITIALIZE, DESTROY */
xml_attribute* xml_attribute_create();
xml_attribute* xml_attribute_initialize(xml_attribute* attribute);
void xml_attribute_destroy(xml_attribute* attribute);

/* GETTERS */
char* xml_attribute_get_name(xml_attribute* attribute);
char* xml_attribute_get_value(xml_attribute* attribute);

/* SETTERS */
void* xml_attribute_set_name(xml_attribute* attribute, char* new_name);
void* xml_attribute_set_value(xml_attribute* attribute, char* new_value);

#endif
