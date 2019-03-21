#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcThreat()
{
    py::class_< UWillowTI_CalcThreat,  UTI_Calc   >("UWillowTI_CalcThreat")
        .def("StaticClass", &UWillowTI_CalcThreat::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}