#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcExposure()
{
    py::class_< UWillowTI_CalcExposure,  UTI_Calc   >("UWillowTI_CalcExposure")
        .def("StaticClass", &UWillowTI_CalcExposure::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}