#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerControllerAttributeContextResolver(py::object m)
{
    py::class_< UPlayerControllerAttributeContextResolver,  UAttributeContextResolver   >(m, "UPlayerControllerAttributeContextResolver")
        .def("StaticClass", &UPlayerControllerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}