#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGlobalAttributeValueResolver()
{
    class_< UGlobalAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UGlobalAttributeValueResolver", no_init)
        .def_readwrite("GlobalAttribute", &UGlobalAttributeValueResolver::GlobalAttribute)
        .def("StaticClass", &UGlobalAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetGlobalAttributeValue", &UGlobalAttributeValueResolver::GetGlobalAttributeValue)
        .def("SetGlobalAttributeValue", &UGlobalAttributeValueResolver::SetGlobalAttributeValue)
        .staticmethod("StaticClass")
  ;
}