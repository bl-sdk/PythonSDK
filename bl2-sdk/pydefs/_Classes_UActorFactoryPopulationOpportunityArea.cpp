#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPopulationOpportunityArea(py::object m)
{
    py::class_< UActorFactoryPopulationOpportunityArea,  UActorFactory   >(m, "UActorFactoryPopulationOpportunityArea")
        .def("StaticClass", &UActorFactoryPopulationOpportunityArea::StaticClass, py::return_value_policy::reference)
          ;
}