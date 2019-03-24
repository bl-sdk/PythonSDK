#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Move(py::module &m)
{
    py::class_< UAttackLocation_Move,  UAttackLocation   >(m, "UAttackLocation_Move")
		.def_static("StaticClass", &UAttackLocation_Move::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxTime", &UAttackLocation_Move::MaxTime)
        .def_readwrite("MoveDistance", &UAttackLocation_Move::MoveDistance)
        .def("ValidLocation", &UAttackLocation_Move::ValidLocation)
          ;
}