#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxCameraModifier()
{
    py::class_< UGearboxCameraModifier,  UCameraModifier   >("UGearboxCameraModifier")
        .def_readwrite("GBXCameraOwner", &UGearboxCameraModifier::GBXCameraOwner)
        .def_readwrite("DesiredPOV", &UGearboxCameraModifier::DesiredPOV)
        .def_readwrite("MasterFadeValue", &UGearboxCameraModifier::MasterFadeValue)
        .def_readwrite("FadeElapsedTime", &UGearboxCameraModifier::FadeElapsedTime)
        .def_readwrite("FadeTimeSpan", &UGearboxCameraModifier::FadeTimeSpan)
        .def_readwrite("FadeMode", &UGearboxCameraModifier::FadeMode)
        .def("StaticClass", &UGearboxCameraModifier::StaticClass, py::return_value_policy::reference)
        .def("LerpFOV", &UGearboxCameraModifier::LerpFOV)
        .def("LerpRotation", &UGearboxCameraModifier::LerpRotation)
        .def("LerpLocation", &UGearboxCameraModifier::LerpLocation)
        .def("UpdateAllLerps", &UGearboxCameraModifier::UpdateAllLerps)
        .def("UpdateMasterFadePercentage", &UGearboxCameraModifier::UpdateMasterFadePercentage)
        .def("IsFadingDownwards", &UGearboxCameraModifier::IsFadingDownwards)
        .def("IsFadingUpwards", &UGearboxCameraModifier::IsFadingUpwards)
        .def("IsFadeInProgress", &UGearboxCameraModifier::IsFadeInProgress)
        .def("StartFadeOut", &UGearboxCameraModifier::StartFadeOut)
        .def("StartFadeIn", &UGearboxCameraModifier::StartFadeIn)
        .def("SetDesiredCamera", &UGearboxCameraModifier::SetDesiredCamera)
        .def("SetGBXCameraOwner", &UGearboxCameraModifier::SetGBXCameraOwner)
        .def("AddCameraModifier", &UGearboxCameraModifier::AddCameraModifier)
        .staticmethod("StaticClass")
  ;
}