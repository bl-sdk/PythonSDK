#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleAttributeContextResolver(py::object m)
{
    py::class_< UVehicleAttributeContextResolver,  UAttributeContextResolver   >(m, "UVehicleAttributeContextResolver")
        .def("StaticClass", &UVehicleAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UVehicleAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}