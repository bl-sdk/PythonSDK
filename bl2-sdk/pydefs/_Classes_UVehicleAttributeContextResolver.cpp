#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleAttributeContextResolver(py::module &m)
{
    py::class_< UVehicleAttributeContextResolver,  UAttributeContextResolver   >(m, "UVehicleAttributeContextResolver")
        .def("GetAttributeContext", &UVehicleAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}