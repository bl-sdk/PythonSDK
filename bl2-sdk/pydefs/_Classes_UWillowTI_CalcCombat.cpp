#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcCombat()
{
    py::class_< UWillowTI_CalcCombat,  UTI_Calc   >("UWillowTI_CalcCombat")
        .def("StaticClass", &UWillowTI_CalcCombat::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}