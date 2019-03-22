#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowTI_CalcCanFire(py::module &m)
{
    py::class_< UWillowTI_CalcCanFire,  UTI_Calc   >(m, "UWillowTI_CalcCanFire")
        .def("StaticClass", &UWillowTI_CalcCanFire::StaticClass, py::return_value_policy::reference)
          ;
}