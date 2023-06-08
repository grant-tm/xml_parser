#ifndef _XML_tag_H
#define _XML_tag_H

typedef struct xml_tag xml_tag;

xml_tag* xml_tag_create();
xml_tag* xml_tag_initialize();
void xml_tag_destroy();

char* xml_tag_get_name(xml_tag* tag);

xml_tag* xml_tag_set_name(xml_tag* tag, char* new_name);

#endif
