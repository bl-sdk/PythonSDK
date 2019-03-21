#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGearboxCameraBasic()
{
    class_< AGearboxCameraBasic, bases< ACamera >  , boost::noncopyable>("AGearboxCameraBasic", no_init)
        .def_readwrite("VfTable_IInterfaceGearboxCamera", &AGearboxCameraBasic::VfTable_IInterfaceGearboxCamera)
        .def("StaticClass", &AGearboxCameraBasic::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventFinishCameraLookAt", &AGearboxCameraBasic::eventFinishCameraLookAt)
        .def("eventEnableThirdPersonLookAt", &AGearboxCameraBasic::eventEnableThirdPersonLookAt)
        .def("BeginCameraLookAt", &AGearboxCameraBasic::BeginCameraLookAt)
        .def("CalcSimpleThirdPersonView", &AGearboxCameraBasic::CalcSimpleThirdPersonView)
        .def("CalcBaseView", &AGearboxCameraBasic::CalcBaseView)
        .def("UpdateViewTarget", &AGearboxCameraBasic::UpdateViewTarget)
        .staticmethod("StaticClass")
  ;
}