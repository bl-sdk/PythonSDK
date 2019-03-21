#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIBehaviorProviderDefinition()
{
    class_< UAIBehaviorProviderDefinition, bases< UBehaviorProviderDefinition >  , boost::noncopyable>("UAIBehaviorProviderDefinition", no_init)
        .def("StaticClass", &UAIBehaviorProviderDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}