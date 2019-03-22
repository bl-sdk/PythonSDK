#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_PopulationPoint(py::module &m)
{
    py::class_< USpecialMove_PopulationPoint,  UWillowAnimDefinition   >(m, "USpecialMove_PopulationPoint")
          ;
}