#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcDistances(py::module &m)
{
    py::class_< UWillowTI_CalcDistances,  UTI_Calc   >(m, "UWillowTI_CalcDistances")
          ;
}