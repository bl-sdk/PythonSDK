#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponPartAttachmentData()
{
    class_< FWeaponPartAttachmentData >("FWeaponPartAttachmentData", no_init)
        .def_readwrite("FirstPersonAttachmentSocket", &FWeaponPartAttachmentData::FirstPersonAttachmentSocket)
        .def_readwrite("ThirdPersonAttachmentSocket", &FWeaponPartAttachmentData::ThirdPersonAttachmentSocket)
        .def_readwrite("FirstPersonOffHandAttachmentSocket", &FWeaponPartAttachmentData::FirstPersonOffHandAttachmentSocket)
        .def_readwrite("ThirdPersonOffHandAttachmentSocket", &FWeaponPartAttachmentData::ThirdPersonOffHandAttachmentSocket)
  ;
}