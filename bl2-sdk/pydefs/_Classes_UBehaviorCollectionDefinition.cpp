#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorCollectionDefinition()
{
    class_< UBehaviorCollectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBehaviorCollectionDefinition", no_init)
        .def_readwrite("Behaviors", &UBehaviorCollectionDefinition::Behaviors)
        .def("StaticClass", &UBehaviorCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}