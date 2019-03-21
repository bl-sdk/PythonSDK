#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcThreat(py::object m)
{
    py::class_< UWillowTI_CalcThreat,  UTI_Calc   >(m, "UWillowTI_CalcThreat")
        .def("StaticClass", &UWillowTI_CalcThreat::StaticClass, py::return_value_policy::reference)
          ;
}