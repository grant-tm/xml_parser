#ifndef _XML_ATTRIBUTE_LIST_H
#define _XML_ATTRIBUTE_LIST_H

typedef struct xml_attribute_list xml_attribute_list;

xml_attribute_list* xml_attribute_list_create();
xml_attribute_list* xml_attribute_list_initialize();
void xml_attribute_list_destroy();

#endif
