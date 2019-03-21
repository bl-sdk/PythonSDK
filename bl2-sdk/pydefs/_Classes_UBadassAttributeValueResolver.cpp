#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBadassAttributeValueResolver()
{
    class_< UBadassAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UBadassAttributeValueResolver", no_init)
        .def_readwrite("AssociatedBadassReward", &UBadassAttributeValueResolver::AssociatedBadassReward)
        .def("StaticClass", &UBadassAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}