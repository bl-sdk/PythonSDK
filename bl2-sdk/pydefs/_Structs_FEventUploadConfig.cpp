#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEventUploadConfig(py::module &m)
{
    py::class_< FEventUploadConfig >(m, "FEventUploadConfig")
        .def_readwrite("UploadType", &FEventUploadConfig::UploadType)
        .def_readwrite("UploadUrl", &FEventUploadConfig::UploadUrl)
        .def_readwrite("TimeOut", &FEventUploadConfig::TimeOut)
  ;
}