#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetMetaInfoValueResolver()
{
    class_< UTargetMetaInfoValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UTargetMetaInfoValueResolver", no_init)
        .def_readwrite("PropertyName", &UTargetMetaInfoValueResolver::PropertyName)
        .def("StaticClass", &UTargetMetaInfoValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}