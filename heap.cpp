#include "heap.h"
#include "hash.h"
#include <iostream>
#include <vector>

using namespace std;

//constructor for heap
heap::heap(int capacity) {

    data.resize(++capacity);
    hashptr = new Hashtable(capacity*2);
    hcapacity = capacity;
    currentsize = 0;

}

int heap::insert(const string &id, int key, void *pv = NULL) {

}

int heap::setKey(const string &id, int key) {

}

int heap::deleteMin(string *pId = NULL, int *pKey = NULL, void *ppData = NULL) {

}

int heap::remove(const string &id, int *pKey = NULL, void *ppData = NULL) {

}

void heap::percolateUp(int position, string direction) {

}

void heap::percolateDown(int position, string direction) {

}

int heap::position(nodeObject *nodeptr) {

}

int heap::locateNodes(int index, string relation) {
    if (relation == "right")
        return (i << 1) + 1;
    else if (relation == "left")
        return (i << 1);
    else if (relation == "parent")
        return (i >> 1);
    else
        return 0;
}

//Need constructor for the nodeObject
