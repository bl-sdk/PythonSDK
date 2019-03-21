#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttachmentLocationData()
{
    class_< FAttachmentLocationData >("FAttachmentLocationData", no_init)
        .def_readwrite("Location", &FAttachmentLocationData::Location)
        .def_readwrite("AttachmentBase", &FAttachmentLocationData::AttachmentBase)
        .def_readonly("UnknownData00", &FAttachmentLocationData::UnknownData00)
        .def_readwrite("AttachmentName", &FAttachmentLocationData::AttachmentName)
  ;
}