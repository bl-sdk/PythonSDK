#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVolumePathNode()
{
    class_< AVolumePathNode, bases< APathNode >  , boost::noncopyable>("AVolumePathNode", no_init)
        .def_readwrite("StartingRadius", &AVolumePathNode::StartingRadius)
        .def_readwrite("StartingHeight", &AVolumePathNode::StartingHeight)
        .def("StaticClass", &AVolumePathNode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}