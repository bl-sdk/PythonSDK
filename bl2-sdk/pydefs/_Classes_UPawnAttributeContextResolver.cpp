#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPawnAttributeContextResolver(py::object m)
{
    py::class_< UPawnAttributeContextResolver,  UAttributeContextResolver   >(m, "UPawnAttributeContextResolver")
        .def("StaticClass", &UPawnAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}