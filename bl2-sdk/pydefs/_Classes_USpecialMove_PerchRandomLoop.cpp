#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_PerchRandomLoop(py::module &m)
{
    py::class_< USpecialMove_PerchRandomLoop,  USpecialMove_PerchLoop   >(m, "USpecialMove_PerchRandomLoop")
        .def_readwrite("RandomList", &USpecialMove_PerchRandomLoop::RandomList)
        .def("StaticClass", &USpecialMove_PerchRandomLoop::StaticClass, py::return_value_policy::reference)
        .def("Contains", &USpecialMove_PerchRandomLoop::Contains)
        .def("GetSMDToPlay", &USpecialMove_PerchRandomLoop::GetSMDToPlay, py::return_value_policy::reference)
          ;
}