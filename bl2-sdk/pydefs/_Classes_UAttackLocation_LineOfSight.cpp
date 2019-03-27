#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_LineOfSight(py::module &m)
{
    py::class_< UAttackLocation_LineOfSight,  UAttackLocation   >(m, "UAttackLocation_LineOfSight")
		.def_static("StaticClass", &UAttackLocation_LineOfSight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LineOfSight", &UAttackLocation_LineOfSight::LineOfSight)
        .def_readwrite("ValidTime", &UAttackLocation_LineOfSight::ValidTime)
        .def_readwrite("ArcAnglePct", &UAttackLocation_LineOfSight::ArcAnglePct)
        .def_readwrite("ArcSpeed", &UAttackLocation_LineOfSight::ArcSpeed)
        .def_readwrite("ArcStartOffset", &UAttackLocation_LineOfSight::ArcStartOffset)
        .def_readwrite("ArcEndOffset", &UAttackLocation_LineOfSight::ArcEndOffset)
        .def("ValidLocation", &UAttackLocation_LineOfSight::ValidLocation)
          ;
}