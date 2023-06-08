#ifndef _XML_ATTRIBUTE_SET_H
#define _XML_ATTRIBUTE_SET_H

extern struct xml_attribute_set;

xml_attribute_set* xml_attribute_set_create();
xml_attribute_set* xml_attribute_set_initialize();
void xml_attribute_set_destroy();

#endif
