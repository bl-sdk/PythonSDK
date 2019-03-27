#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWorldBody(py::module &m)
{
    py::class_< UIWorldBody,  UInterface   >(m, "UIWorldBody")
		.def_static("StaticClass", &UIWorldBody::StaticClass, py::return_value_policy::reference)
        .def("WorldBodyAttachComponent", &UIWorldBody::WorldBodyAttachComponent)
        .def("WorldBodyAttachActor", &UIWorldBody::WorldBodyAttachActor)
        .def("WorldBodyAttachTo", &UIWorldBody::WorldBodyAttachTo)
        .def("GetWorldBodyAttachmentBoneForComponent", &UIWorldBody::GetWorldBodyAttachmentBoneForComponent)
        .def("GetWorldBodyAttachmentLocationAndRotation", &UIWorldBody::GetWorldBodyAttachmentLocationAndRotation)
        .def("GetWorldBodyAttachmentRotation", &UIWorldBody::GetWorldBodyAttachmentRotation)
        .def("GetWorldBodyAttachmentLocation", &UIWorldBody::GetWorldBodyAttachmentLocation)
        .def("GetWorldBodyAttachmentBase", &UIWorldBody::GetWorldBodyAttachmentBase, py::return_value_policy::reference)
        .def("GetWorldBodyVelocity", &UIWorldBody::GetWorldBodyVelocity)
        .def("GetWorldBodyRotation", &UIWorldBody::GetWorldBodyRotation)
        .def("GetWorldBodyLocation", &UIWorldBody::GetWorldBodyLocation)
          ;
}