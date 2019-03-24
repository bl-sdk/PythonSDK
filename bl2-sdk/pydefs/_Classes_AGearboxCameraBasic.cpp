#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxCameraBasic(py::module &m)
{
    py::class_< AGearboxCameraBasic,  ACamera   >(m, "AGearboxCameraBasic")
		.def_static("StaticClass", &AGearboxCameraBasic::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IInterfaceGearboxCamera", &AGearboxCameraBasic::VfTable_IInterfaceGearboxCamera)
        .def("eventFinishCameraLookAt", &AGearboxCameraBasic::eventFinishCameraLookAt)
        .def("eventEnableThirdPersonLookAt", &AGearboxCameraBasic::eventEnableThirdPersonLookAt)
        .def("BeginCameraLookAt", &AGearboxCameraBasic::BeginCameraLookAt)
        .def("CalcSimpleThirdPersonView", &AGearboxCameraBasic::CalcSimpleThirdPersonView)
        .def("CalcBaseView", &AGearboxCameraBasic::CalcBaseView)
        .def("UpdateViewTarget", &AGearboxCameraBasic::UpdateViewTarget)
          ;
}