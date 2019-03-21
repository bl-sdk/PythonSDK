#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcDistances()
{
    py::class_< UWillowTI_CalcDistances,  UTI_Calc   >("UWillowTI_CalcDistances")
        .def("StaticClass", &UWillowTI_CalcDistances::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}