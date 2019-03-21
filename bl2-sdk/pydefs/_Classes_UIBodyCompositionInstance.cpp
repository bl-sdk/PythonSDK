#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIBodyCompositionInstance()
{
    class_< UIBodyCompositionInstance, bases< UInterface >  , boost::noncopyable>("UIBodyCompositionInstance", no_init)
        .def("StaticClass", &UIBodyCompositionInstance::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearBodyCompositionInstance", &UIBodyCompositionInstance::ClearBodyCompositionInstance)
        .def("ApplyPreviewBodyComposition", &UIBodyCompositionInstance::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &UIBodyCompositionInstance::GetBodyInfoProvider, return_value_policy< reference_existing_object >())
        .def("ChangeInstanceDataSwitch", &UIBodyCompositionInstance::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &UIBodyCompositionInstance::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &UIBodyCompositionInstance::PreRemoveBodyComposition)
        .staticmethod("StaticClass")
  ;
}