#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttachmentLocationData()
{
    py::class_< FAttachmentLocationData >("FAttachmentLocationData")
        .def_readwrite("Location", &FAttachmentLocationData::Location)
        .def_readwrite("AttachmentBase", &FAttachmentLocationData::AttachmentBase)
        .def_readonly("UnknownData00", &FAttachmentLocationData::UnknownData00)
        .def_readwrite("AttachmentName", &FAttachmentLocationData::AttachmentName)
  ;
}