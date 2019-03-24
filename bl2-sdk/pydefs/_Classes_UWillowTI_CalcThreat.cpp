#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcThreat(py::module &m)
{
    py::class_< UWillowTI_CalcThreat,  UTI_Calc   >(m, "UWillowTI_CalcThreat")
		.def_static("StaticClass", &UWillowTI_CalcThreat::StaticClass, py::return_value_policy::reference)
          ;
}