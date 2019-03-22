#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URandomAttributeValueResolver(py::module &m)
{
    py::class_< URandomAttributeValueResolver,  UAttributeValueResolver   >(m, "URandomAttributeValueResolver")
        .def_readwrite("LowerBound", &URandomAttributeValueResolver::LowerBound)
        .def_readwrite("UpperBound", &URandomAttributeValueResolver::UpperBound)
        .def_readwrite("ValueLifetime", &URandomAttributeValueResolver::ValueLifetime)
        .def_readwrite("SavedRandomValues", &URandomAttributeValueResolver::SavedRandomValues)
        .def("StaticClass", &URandomAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}