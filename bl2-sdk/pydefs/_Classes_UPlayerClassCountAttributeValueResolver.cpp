#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerClassCountAttributeValueResolver()
{
    class_< UPlayerClassCountAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UPlayerClassCountAttributeValueResolver", no_init)
        .def_readwrite("PlayerClassId", &UPlayerClassCountAttributeValueResolver::PlayerClassId)
        .def("StaticClass", &UPlayerClassCountAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResetPlayerClassCountOverride", &UPlayerClassCountAttributeValueResolver::ResetPlayerClassCountOverride)
        .def("SetPlayerClassCountOverride", &UPlayerClassCountAttributeValueResolver::SetPlayerClassCountOverride)
        .staticmethod("StaticClass")
  ;
}