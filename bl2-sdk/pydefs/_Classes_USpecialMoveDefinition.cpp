#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMoveDefinition()
{
    py::class_< USpecialMoveDefinition,  UGBXDefinition   >("USpecialMoveDefinition")
        .def_readwrite("NextSpecialMove", &USpecialMoveDefinition::NextSpecialMove)
        .def_readwrite("StopExpression", &USpecialMoveDefinition::StopExpression)
        .def("StaticClass", &USpecialMoveDefinition::StaticClass, py::return_value_policy::reference)
        .def("eventIsPlayingLocally", &USpecialMoveDefinition::eventIsPlayingLocally)
        .def("GetSMDToPlay", &USpecialMoveDefinition::GetSMDToPlay, py::return_value_policy::reference)
        .def("Contains", &USpecialMoveDefinition::Contains)
        .def("eventClientFinished", &USpecialMoveDefinition::eventClientFinished)
        .def("eventServerFinished", &USpecialMoveDefinition::eventServerFinished)
        .def("eventClientStarted", &USpecialMoveDefinition::eventClientStarted)
        .def("eventServerStarted", &USpecialMoveDefinition::eventServerStarted)
        .def("IsLocalAuthority", &USpecialMoveDefinition::IsLocalAuthority)
        .def("eventAuthorityCanPlay", &USpecialMoveDefinition::eventAuthorityCanPlay)
        .staticmethod("StaticClass")
  ;
}