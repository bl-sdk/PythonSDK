#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APathNode()
{
    class_< APathNode, bases< ANavigationPoint >  , boost::noncopyable>("APathNode", no_init)
        .def("StaticClass", &APathNode::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDebugAbbrev", &APathNode::eventGetDebugAbbrev)
        .staticmethod("StaticClass")
  ;
}