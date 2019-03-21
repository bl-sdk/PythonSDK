#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UControllerAttributeContextResolver(py::object m)
{
    py::class_< UControllerAttributeContextResolver,  UAttributeContextResolver   >(m, "UControllerAttributeContextResolver")
        .def("StaticClass", &UControllerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}