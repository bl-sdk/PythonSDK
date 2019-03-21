#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_ChargeTarget(py::object m)
{
    py::class_< UAction_ChargeTarget,  UAction_BasicAttack   >(m, "UAction_ChargeTarget")
        .def_readwrite("MissDistance", &UAction_ChargeTarget::MissDistance)
        .def_readwrite("StrikeDistance", &UAction_ChargeTarget::StrikeDistance)
        .def_readwrite("ChargeStart", &UAction_ChargeTarget::ChargeStart)
        .def_readwrite("ChargeStop", &UAction_ChargeTarget::ChargeStop)
        .def_readwrite("ChargeStrike", &UAction_ChargeTarget::ChargeStrike)
        .def_readwrite("ChargeHitWall", &UAction_ChargeTarget::ChargeHitWall)
        .def("StaticClass", &UAction_ChargeTarget::StaticClass, py::return_value_policy::reference)
        .def("StopCharge", &UAction_ChargeTarget::StopCharge)
        .def("ChargeFinished", &UAction_ChargeTarget::ChargeFinished)
        .def("eventCanRun", &UAction_ChargeTarget::eventCanRun)
          ;
}