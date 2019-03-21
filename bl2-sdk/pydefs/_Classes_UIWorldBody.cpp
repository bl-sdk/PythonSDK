#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIWorldBody()
{
    class_< UIWorldBody, bases< UInterface >  , boost::noncopyable>("UIWorldBody", no_init)
        .def("StaticClass", &UIWorldBody::StaticClass, return_value_policy< reference_existing_object >())
        .def("WorldBodyAttachComponent", &UIWorldBody::WorldBodyAttachComponent)
        .def("WorldBodyAttachActor", &UIWorldBody::WorldBodyAttachActor)
        .def("WorldBodyAttachTo", &UIWorldBody::WorldBodyAttachTo)
        .def("GetWorldBodyAttachmentBoneForComponent", &UIWorldBody::GetWorldBodyAttachmentBoneForComponent)
        .def("GetWorldBodyAttachmentLocationAndRotation", &UIWorldBody::GetWorldBodyAttachmentLocationAndRotation)
        .def("GetWorldBodyAttachmentRotation", &UIWorldBody::GetWorldBodyAttachmentRotation)
        .def("GetWorldBodyAttachmentLocation", &UIWorldBody::GetWorldBodyAttachmentLocation)
        .def("GetWorldBodyAttachmentBase", &UIWorldBody::GetWorldBodyAttachmentBase, return_value_policy< reference_existing_object >())
        .def("GetWorldBodyVelocity", &UIWorldBody::GetWorldBodyVelocity)
        .def("GetWorldBodyRotation", &UIWorldBody::GetWorldBodyRotation)
        .def("GetWorldBodyLocation", &UIWorldBody::GetWorldBodyLocation)
        .staticmethod("StaticClass")
  ;
}