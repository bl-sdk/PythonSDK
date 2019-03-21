#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryPathNode()
{
    class_< UActorFactoryPathNode, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryPathNode", no_init)
        .def("StaticClass", &UActorFactoryPathNode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}