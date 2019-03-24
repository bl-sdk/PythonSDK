#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReadOnlyObjectPropertyAttributeValueResolver(py::module &m)
{
    py::class_< UReadOnlyObjectPropertyAttributeValueResolver,  UAttributeValueResolver   >(m, "UReadOnlyObjectPropertyAttributeValueResolver")
		.def_static("StaticClass", &UReadOnlyObjectPropertyAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PropertyName", &UObjectPropertyAttributeValueResolver::PropertyName)
        .def_readwrite("CachedProperty", &UObjectPropertyAttributeValueResolver::CachedProperty)
          ;
}