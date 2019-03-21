#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityArea()
{
    py::class_< UActorFactoryPopulationOpportunityArea,  UActorFactory   >("UActorFactoryPopulationOpportunityArea")
        .def("StaticClass", &UActorFactoryPopulationOpportunityArea::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}