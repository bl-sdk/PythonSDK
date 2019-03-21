#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReadOnlyObjectPropertyAttributeValueResolver()
{
    py::class_< UReadOnlyObjectPropertyAttributeValueResolver,  UAttributeValueResolver   >("UReadOnlyObjectPropertyAttributeValueResolver")
        .def_readwrite("PropertyName", &UObjectPropertyAttributeValueResolver::PropertyName)
        .def_readwrite("CachedProperty", &UObjectPropertyAttributeValueResolver::CachedProperty)
        .def("StaticClass", &UReadOnlyObjectPropertyAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}