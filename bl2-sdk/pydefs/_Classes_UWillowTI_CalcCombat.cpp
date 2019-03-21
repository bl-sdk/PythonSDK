#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcCombat(py::object m)
{
    py::class_< UWillowTI_CalcCombat,  UTI_Calc   >(m, "UWillowTI_CalcCombat")
        .def("StaticClass", &UWillowTI_CalcCombat::StaticClass, py::return_value_policy::reference)
          ;
}