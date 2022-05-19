#include "../../include/StackList.h"

void StackList::Push(const DVDNode &newDVD) {
  DVDNode* node = new DVDNode;
  *node = newDVD;
  node->next = head;
  head = node;
  if (head->next == nullptr) {
    tail = head;
    ++stackCount;
    return;
  }
  node->next->prev = node;
  ++stackCount;
}

DVDNode StackList::Pop() {
  DVDNode tempReturn = *tail;
  tail = tail->prev;
  delete tail;
  tail->next = nullptr;
  --stackCount;
  return tempReturn;
}

bool StackList::IsEmpty() const { return (head == nullptr); }
DVDNode StackList::Peek() const { return *head; }
int StackList::Size() const { return stackCount; }