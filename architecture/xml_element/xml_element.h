#ifndef _XML_ELEMENT_H
#define _XML_ELEMENT_H

extern enum xml_element_type;
extern struct xml_element;

xml_element* xml_element_create();
xml_element* xml_element_initialize();
void xml_element_destroy();

#endif
