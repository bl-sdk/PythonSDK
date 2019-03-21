#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AttachActor()
{
    class_< UBehavior_AttachActor, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AttachActor", no_init)
        .def_readwrite("AttachmentPointName", &UBehavior_AttachActor::AttachmentPointName)
        .def_readwrite("ToAttach", &UBehavior_AttachActor::ToAttach)
        .def_readwrite("AttachTime", &UBehavior_AttachActor::AttachTime)
        .def_readwrite("InstanceDataName", &UBehavior_AttachActor::InstanceDataName)
        .def("StaticClass", &UBehavior_AttachActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AttachActor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}