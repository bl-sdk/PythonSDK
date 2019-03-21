#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAttachableActor()
{
    class_< UIAttachableActor, bases< UInterface >  , boost::noncopyable>("UIAttachableActor", no_init)
        .def("StaticClass", &UIAttachableActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttachedToActor", &UIAttachableActor::GetAttachedToActor, return_value_policy< reference_existing_object >())
        .def("GetAttachmentNormal", &UIAttachableActor::GetAttachmentNormal)
        .def("AttachToActor", &UIAttachableActor::AttachToActor)
        .def("IsAttached", &UIAttachableActor::IsAttached)
        .staticmethod("StaticClass")
  ;
}