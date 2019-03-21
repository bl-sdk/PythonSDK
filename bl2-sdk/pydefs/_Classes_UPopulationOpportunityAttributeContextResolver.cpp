#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityAttributeContextResolver()
{
    py::class_< UPopulationOpportunityAttributeContextResolver,  UAttributeContextResolver   >("UPopulationOpportunityAttributeContextResolver")
        .def("StaticClass", &UPopulationOpportunityAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}