#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_PopulationPoint()
{
    py::class_< USpecialMove_PopulationPoint,  UWillowAnimDefinition   >("USpecialMove_PopulationPoint")
        .def("StaticClass", &USpecialMove_PopulationPoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}