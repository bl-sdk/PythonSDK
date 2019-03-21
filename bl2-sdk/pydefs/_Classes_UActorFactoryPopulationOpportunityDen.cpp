#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityDen()
{
    py::class_< UActorFactoryPopulationOpportunityDen,  UActorFactory   >("UActorFactoryPopulationOpportunityDen")
        .def("StaticClass", &UActorFactoryPopulationOpportunityDen::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}