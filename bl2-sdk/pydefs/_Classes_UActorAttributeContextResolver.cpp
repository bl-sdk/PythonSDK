#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorAttributeContextResolver(py::object m)
{
    py::class_< UActorAttributeContextResolver,  UAttributeContextResolver   >(m, "UActorAttributeContextResolver")
        .def("StaticClass", &UActorAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UActorAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}