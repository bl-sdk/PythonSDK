#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_PopulationPoint(py::object m)
{
    py::class_< USpecialMove_PopulationPoint,  UWillowAnimDefinition   >(m, "USpecialMove_PopulationPoint")
        .def("StaticClass", &USpecialMove_PopulationPoint::StaticClass, py::return_value_policy::reference)
          ;
}