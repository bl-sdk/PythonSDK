#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UConstantAttributeValueResolver()
{
    class_< UConstantAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UConstantAttributeValueResolver", no_init)
        .def_readwrite("ConstantValue", &UConstantAttributeValueResolver::ConstantValue)
        .def("StaticClass", &UConstantAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}