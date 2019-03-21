#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerClassCountAttributeValueResolver()
{
    py::class_< UPlayerClassCountAttributeValueResolver,  UAttributeValueResolver   >("UPlayerClassCountAttributeValueResolver")
        .def_readwrite("PlayerClassId", &UPlayerClassCountAttributeValueResolver::PlayerClassId)
        .def("StaticClass", &UPlayerClassCountAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def("ResetPlayerClassCountOverride", &UPlayerClassCountAttributeValueResolver::ResetPlayerClassCountOverride)
        .def("SetPlayerClassCountOverride", &UPlayerClassCountAttributeValueResolver::SetPlayerClassCountOverride)
        .staticmethod("StaticClass")
  ;
}