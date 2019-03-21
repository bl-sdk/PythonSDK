#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_ChargeTarget()
{
    class_< UAction_ChargeTarget, bases< UAction_BasicAttack >  , boost::noncopyable>("UAction_ChargeTarget", no_init)
        .def_readwrite("MissDistance", &UAction_ChargeTarget::MissDistance)
        .def_readwrite("StrikeDistance", &UAction_ChargeTarget::StrikeDistance)
        .def_readwrite("ChargeStart", &UAction_ChargeTarget::ChargeStart)
        .def_readwrite("ChargeStop", &UAction_ChargeTarget::ChargeStop)
        .def_readwrite("ChargeStrike", &UAction_ChargeTarget::ChargeStrike)
        .def_readwrite("ChargeHitWall", &UAction_ChargeTarget::ChargeHitWall)
        .def("StaticClass", &UAction_ChargeTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopCharge", &UAction_ChargeTarget::StopCharge)
        .def("ChargeFinished", &UAction_ChargeTarget::ChargeFinished)
        .def("eventCanRun", &UAction_ChargeTarget::eventCanRun)
        .staticmethod("StaticClass")
  ;
}