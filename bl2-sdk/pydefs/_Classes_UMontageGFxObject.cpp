#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMontageGFxObject(py::object m)
{
    py::class_< UMontageGFxObject,  UGFxObject   >(m, "UMontageGFxObject")
        .def_readwrite("WPCOwner", &UMontageGFxObject::WPCOwner)
        .def_readwrite("CreditsDef", &UMontageGFxObject::CreditsDef)
        .def_readwrite("LinkageName", &UMontageGFxObject::LinkageName)
        .def_readwrite("MontageIdx", &UMontageGFxObject::MontageIdx)
        .def_readwrite("MontageTextures", &UMontageGFxObject::MontageTextures)
        .def("StaticClass", &UMontageGFxObject::StaticClass, py::return_value_policy::reference)
        .def("extFadeOutComplete", &UMontageGFxObject::extFadeOutComplete)
        .def("extFadeInComplete", &UMontageGFxObject::extFadeInComplete)
        .def("FadeOut", &UMontageGFxObject::FadeOut)
        .def("FadeIn", &UMontageGFxObject::FadeIn)
        .def("StartNewTexture", &UMontageGFxObject::StartNewTexture)
        .def("StartNextTexture", &UMontageGFxObject::StartNextTexture)
        .def("Close", &UMontageGFxObject::Close)
        .def("eventOnMontageTexturesLoaded", &UMontageGFxObject::eventOnMontageTexturesLoaded)
        .def("Init", &UMontageGFxObject::Init)
        .def("SetShouldShowImages", &UMontageGFxObject::SetShouldShowImages)
        .def("ClearMontageTextures", &UMontageGFxObject::ClearMontageTextures)
        .def("AddMontageTextures", &UMontageGFxObject::AddMontageTextures)
          ;
}