#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEventUploadConfig()
{
    class_< FEventUploadConfig >("FEventUploadConfig", no_init)
        .def_readwrite("UploadType", &FEventUploadConfig::UploadType)
        .def_readwrite("UploadUrl", &FEventUploadConfig::UploadUrl)
        .def_readwrite("TimeOut", &FEventUploadConfig::TimeOut)
  ;
}