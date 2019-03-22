#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAttachableActor(py::module &m)
{
    py::class_< UIAttachableActor,  UInterface   >(m, "UIAttachableActor")
        .def("StaticClass", &UIAttachableActor::StaticClass, py::return_value_policy::reference)
        .def("GetAttachedToActor", &UIAttachableActor::GetAttachedToActor, py::return_value_policy::reference)
        .def("GetAttachmentNormal", &UIAttachableActor::GetAttachmentNormal)
        .def("AttachToActor", &UIAttachableActor::AttachToActor)
        .def("IsAttached", &UIAttachableActor::IsAttached)
          ;
}