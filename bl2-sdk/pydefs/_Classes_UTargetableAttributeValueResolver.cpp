#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetableAttributeValueResolver()
{
    class_< UTargetableAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UTargetableAttributeValueResolver", no_init)
        .def_readwrite("ValueToResolve", &UTargetableAttributeValueResolver::ValueToResolve)
        .def("StaticClass", &UTargetableAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}