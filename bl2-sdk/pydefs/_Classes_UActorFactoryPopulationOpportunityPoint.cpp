#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityPoint()
{
    py::class_< UActorFactoryPopulationOpportunityPoint,  UActorFactory   >("UActorFactoryPopulationOpportunityPoint")
        .def("StaticClass", &UActorFactoryPopulationOpportunityPoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}