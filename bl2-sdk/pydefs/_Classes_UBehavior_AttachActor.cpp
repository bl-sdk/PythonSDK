#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AttachActor()
{
    py::class_< UBehavior_AttachActor,  UBehaviorBase   >("UBehavior_AttachActor")
        .def_readwrite("AttachmentPointName", &UBehavior_AttachActor::AttachmentPointName)
        .def_readwrite("ToAttach", &UBehavior_AttachActor::ToAttach)
        .def_readwrite("AttachTime", &UBehavior_AttachActor::AttachTime)
        .def_readwrite("InstanceDataName", &UBehavior_AttachActor::InstanceDataName)
        .def("StaticClass", &UBehavior_AttachActor::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AttachActor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}