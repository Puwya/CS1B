#include "../include/header.h"

void subString(DVD *head) {
   DVD* node = head;
   while (node->nextNode != NULL) {
      if (node->title.size() > 47) {
         node->title = node->title.substr(0, 44);
         node->title += "...";
      }else
         node->title = node->title.substr(0, node->title.size() - 1);
      if (node->leadActor.size() > 18) {
         node->leadActor = node->leadActor.substr(0, 15);
         node->leadActor += "...";
      }else
         node->leadActor = node->leadActor.substr(0, node->leadActor.size() - 1);
      if (node->subActor.size() > 18) {
         node->subActor = node->subActor.substr(0, 15);
         node->subActor += "...";
      }else
         node->subActor = node->subActor.substr(0, node->subActor.size() - 1);
      node->genre= node->genre.substr(0, node->genre.size() - 1);
      node->altGenre= node->altGenre.substr(0, node->altGenre.size() - 1);
      node->synopsis= node->synopsis.substr(0, node->synopsis.size() - 1);
      node = node->nextNode;
   }
}