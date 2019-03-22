#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Perch(py::module &m)
{
    py::class_< USpecialMove_Perch,  UWillowAnimDefinition   >(m, "USpecialMove_Perch")
          ;
}