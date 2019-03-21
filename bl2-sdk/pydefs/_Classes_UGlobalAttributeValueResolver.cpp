#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGlobalAttributeValueResolver()
{
    py::class_< UGlobalAttributeValueResolver,  UAttributeValueResolver   >("UGlobalAttributeValueResolver")
        .def_readwrite("GlobalAttribute", &UGlobalAttributeValueResolver::GlobalAttribute)
        .def("StaticClass", &UGlobalAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def("GetGlobalAttributeValue", &UGlobalAttributeValueResolver::GetGlobalAttributeValue)
        .def("SetGlobalAttributeValue", &UGlobalAttributeValueResolver::SetGlobalAttributeValue)
        .staticmethod("StaticClass")
  ;
}