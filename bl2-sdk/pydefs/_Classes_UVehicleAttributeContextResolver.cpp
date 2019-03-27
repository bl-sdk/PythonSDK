#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleAttributeContextResolver(py::module &m)
{
    py::class_< UVehicleAttributeContextResolver,  UAttributeContextResolver   >(m, "UVehicleAttributeContextResolver")
		.def_static("StaticClass", &UVehicleAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UVehicleAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}