#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityPoint(py::module &m)
{
    py::class_< UActorFactoryPopulationOpportunityPoint,  UActorFactory   >(m, "UActorFactoryPopulationOpportunityPoint")
		.def_static("StaticClass", &UActorFactoryPopulationOpportunityPoint::StaticClass, py::return_value_policy::reference)
          ;
}