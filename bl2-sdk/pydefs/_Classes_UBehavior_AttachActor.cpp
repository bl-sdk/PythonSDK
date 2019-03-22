#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AttachActor(py::module &m)
{
    py::class_< UBehavior_AttachActor,  UBehaviorBase   >(m, "UBehavior_AttachActor")
        .def_readwrite("AttachmentPointName", &UBehavior_AttachActor::AttachmentPointName)
        .def_readwrite("ToAttach", &UBehavior_AttachActor::ToAttach)
        .def_readwrite("AttachTime", &UBehavior_AttachActor::AttachTime)
        .def_readwrite("InstanceDataName", &UBehavior_AttachActor::InstanceDataName)
        .def("ApplyBehaviorToContext", &UBehavior_AttachActor::ApplyBehaviorToContext)
          ;
}