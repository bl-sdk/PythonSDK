#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_ShootTarget()
{
    py::class_< UAction_ShootTarget,  UAction_GenericAttack   >("UAction_ShootTarget")
        .def_readwrite("ChanceToCrouch", &UAction_ShootTarget::ChanceToCrouch)
        .def_readwrite("ChanceToMoveCrouch", &UAction_ShootTarget::ChanceToMoveCrouch)
        .def_readwrite("Angle", &UAction_ShootTarget::Angle)
        .def_readwrite("Range", &UAction_ShootTarget::Range)
        .def_readwrite("RangeType", &UAction_ShootTarget::RangeType)
        .def_readwrite("ZoneSearch", &UAction_ShootTarget::ZoneSearch)
        .def("StaticClass", &UAction_ShootTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}