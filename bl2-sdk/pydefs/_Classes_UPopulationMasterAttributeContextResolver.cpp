#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationMasterAttributeContextResolver(py::module &m)
{
    py::class_< UPopulationMasterAttributeContextResolver,  UAttributeContextResolver   >(m, "UPopulationMasterAttributeContextResolver")
		.def_static("StaticClass", &UPopulationMasterAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UPopulationMasterAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}