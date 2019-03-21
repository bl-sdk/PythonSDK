#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOctreeElementId()
{
    class_< FOctreeElementId >("FOctreeElementId", no_init)
        .def_readwrite("Node", &FOctreeElementId::Node)
        .def_readwrite("ElementIndex", &FOctreeElementId::ElementIndex)
  ;
}