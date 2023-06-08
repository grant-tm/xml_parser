#ifndef _XML_ELEMENT_SET_H
#define _XML_ELEMENT_SET_H

extern struct xml_element_set;

xml_element_set* xml_element_set_create();
xml_element_set* xml_element_set_initialize();
void xml_element_set_destroy();

#endif
