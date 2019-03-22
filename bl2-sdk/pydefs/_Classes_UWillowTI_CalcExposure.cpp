#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcExposure(py::module &m)
{
    py::class_< UWillowTI_CalcExposure,  UTI_Calc   >(m, "UWillowTI_CalcExposure")
          ;
}