#include "../include/header.h"

void subString(DVD* head) {
   DVD* node = head;
   while (node->nextNode != NULL) {
      node->title = node->title.substr(0, node->title.size() - 1);
      node->leadActor = node->leadActor.substr(0, node->leadActor.size() - 1);
      node->subActor = node->subActor.substr(0, node->subActor.size() - 1);
      node->genre= node->genre.substr(0, node->genre.size() - 1);
      node->altGenre= node->altGenre.substr(0, node->altGenre.size() - 1);
      node->synopsis= node->synopsis.substr(0, node->synopsis.size() - 1);
      node = node->nextNode;
   }
}