#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttachmentData(py::object m)
{
    py::class_< FAttachmentData >(m, "FAttachmentData")
        .def_readwrite("AttachmentBase", &FAttachmentData::AttachmentBase)
        .def_readwrite("AttachmentBaseBoneName", &FAttachmentData::AttachmentBaseBoneName)
        .def_readwrite("AttachmentRelativeOffset", &FAttachmentData::AttachmentRelativeOffset)
        .def_readwrite("AttachmentRelativeRotation", &FAttachmentData::AttachmentRelativeRotation)
        .def_readwrite("AttachmentPhysicsMode", &FAttachmentData::AttachmentPhysicsMode)
  ;
}