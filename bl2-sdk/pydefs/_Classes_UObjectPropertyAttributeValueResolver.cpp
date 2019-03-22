#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectPropertyAttributeValueResolver(py::module &m)
{
    py::class_< UObjectPropertyAttributeValueResolver,  UAttributeValueResolver   >(m, "UObjectPropertyAttributeValueResolver")
        .def_readwrite("PropertyName", &UObjectPropertyAttributeValueResolver::PropertyName)
        .def_readwrite("CachedProperty", &UObjectPropertyAttributeValueResolver::CachedProperty)
        .def("StaticClass", &UObjectPropertyAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}