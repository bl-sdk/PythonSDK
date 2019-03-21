#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMontageGFxObject()
{
    class_< UMontageGFxObject, bases< UGFxObject >  , boost::noncopyable>("UMontageGFxObject", no_init)
        .def_readwrite("WPCOwner", &UMontageGFxObject::WPCOwner)
        .def_readwrite("CreditsDef", &UMontageGFxObject::CreditsDef)
        .def_readwrite("LinkageName", &UMontageGFxObject::LinkageName)
        .def_readwrite("MontageIdx", &UMontageGFxObject::MontageIdx)
        .def_readwrite("MontageTextures", &UMontageGFxObject::MontageTextures)
        .def("StaticClass", &UMontageGFxObject::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}