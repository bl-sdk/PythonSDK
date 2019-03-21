#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGlobalAttributeValueResolver(py::object m)
{
    py::class_< UGlobalAttributeValueResolver,  UAttributeValueResolver   >(m, "UGlobalAttributeValueResolver")
        .def_readwrite("GlobalAttribute", &UGlobalAttributeValueResolver::GlobalAttribute)
        .def("StaticClass", &UGlobalAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def("GetGlobalAttributeValue", &UGlobalAttributeValueResolver::GetGlobalAttributeValue)
        .def("SetGlobalAttributeValue", &UGlobalAttributeValueResolver::SetGlobalAttributeValue)
          ;
}