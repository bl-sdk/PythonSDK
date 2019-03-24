#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityDen(py::module &m)
{
    py::class_< UActorFactoryPopulationOpportunityDen,  UActorFactory   >(m, "UActorFactoryPopulationOpportunityDen")
		.def_static("StaticClass", &UActorFactoryPopulationOpportunityDen::StaticClass, py::return_value_policy::reference)
          ;
}