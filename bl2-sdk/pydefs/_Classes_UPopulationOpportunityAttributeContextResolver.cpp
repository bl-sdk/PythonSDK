#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityAttributeContextResolver(py::module &m)
{
    py::class_< UPopulationOpportunityAttributeContextResolver,  UAttributeContextResolver   >(m, "UPopulationOpportunityAttributeContextResolver")
        .def("StaticClass", &UPopulationOpportunityAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}