#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttachmentData()
{
    class_< FAttachmentData >("FAttachmentData", no_init)
        .def_readwrite("AttachmentBase", &FAttachmentData::AttachmentBase)
        .def_readwrite("AttachmentBaseBoneName", &FAttachmentData::AttachmentBaseBoneName)
        .def_readwrite("AttachmentRelativeOffset", &FAttachmentData::AttachmentRelativeOffset)
        .def_readwrite("AttachmentRelativeRotation", &FAttachmentData::AttachmentRelativeRotation)
        .def_readwrite("AttachmentPhysicsMode", &FAttachmentData::AttachmentPhysicsMode)
  ;
}