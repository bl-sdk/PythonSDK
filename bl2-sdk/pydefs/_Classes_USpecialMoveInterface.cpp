#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMoveInterface(py::module &m)
{
    py::class_< USpecialMoveInterface,  UInterface   >(m, "USpecialMoveInterface")
		.def_static("StaticClass", &USpecialMoveInterface::StaticClass, py::return_value_policy::reference)
        .def("SetReplicatedSMData", &USpecialMoveInterface::SetReplicatedSMData)
        .def("eventServerSpecialMove_StopAny", &USpecialMoveInterface::eventServerSpecialMove_StopAny)
        .def("eventServerSpecialMove_Stop", &USpecialMoveInterface::eventServerSpecialMove_Stop)
        .def("eventServerSpecialMove_Queue", &USpecialMoveInterface::eventServerSpecialMove_Queue)
        .def("eventServerSpecialMove_Play", &USpecialMoveInterface::eventServerSpecialMove_Play)
        .def("GetDefaultRootMotionRotationMode", &USpecialMoveInterface::GetDefaultRootMotionRotationMode)
        .def("GetDefaultRootMotionMode", &USpecialMoveInterface::GetDefaultRootMotionMode)
        .def("GetSkelMesh", &USpecialMoveInterface::GetSkelMesh, py::return_value_policy::reference)
        .def("GetSMComponent", &USpecialMoveInterface::GetSMComponent, py::return_value_policy::reference)
        .def("GetActor", &USpecialMoveInterface::GetActor, py::return_value_policy::reference)
          ;
}