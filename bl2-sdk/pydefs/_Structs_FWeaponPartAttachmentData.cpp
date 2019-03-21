#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponPartAttachmentData(py::object m)
{
    py::class_< FWeaponPartAttachmentData >(m, "FWeaponPartAttachmentData")
        .def_readwrite("FirstPersonAttachmentSocket", &FWeaponPartAttachmentData::FirstPersonAttachmentSocket)
        .def_readwrite("ThirdPersonAttachmentSocket", &FWeaponPartAttachmentData::ThirdPersonAttachmentSocket)
        .def_readwrite("FirstPersonOffHandAttachmentSocket", &FWeaponPartAttachmentData::FirstPersonOffHandAttachmentSocket)
        .def_readwrite("ThirdPersonOffHandAttachmentSocket", &FWeaponPartAttachmentData::ThirdPersonOffHandAttachmentSocket)
  ;
}