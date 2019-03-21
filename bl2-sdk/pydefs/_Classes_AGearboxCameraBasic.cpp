#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxCameraBasic()
{
    py::class_< AGearboxCameraBasic,  ACamera   >("AGearboxCameraBasic")
        .def_readwrite("VfTable_IInterfaceGearboxCamera", &AGearboxCameraBasic::VfTable_IInterfaceGearboxCamera)
        .def("StaticClass", &AGearboxCameraBasic::StaticClass, py::return_value_policy::reference)
        .def("eventFinishCameraLookAt", &AGearboxCameraBasic::eventFinishCameraLookAt)
        .def("eventEnableThirdPersonLookAt", &AGearboxCameraBasic::eventEnableThirdPersonLookAt)
        .def("BeginCameraLookAt", &AGearboxCameraBasic::BeginCameraLookAt)
        .def("CalcSimpleThirdPersonView", &AGearboxCameraBasic::CalcSimpleThirdPersonView)
        .def("CalcBaseView", &AGearboxCameraBasic::CalcBaseView)
        .def("UpdateViewTarget", &AGearboxCameraBasic::UpdateViewTarget)
        .staticmethod("StaticClass")
  ;
}