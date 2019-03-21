#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationMasterAttributeContextResolver()
{
    py::class_< UPopulationMasterAttributeContextResolver,  UAttributeContextResolver   >("UPopulationMasterAttributeContextResolver")
        .def("StaticClass", &UPopulationMasterAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UPopulationMasterAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}