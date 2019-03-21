#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChannelDownload()
{
    py::class_< UChannelDownload,  UDownload   >("UChannelDownload")
        .def_readonly("UnknownData00", &UChannelDownload::UnknownData00)
        .def("StaticClass", &UChannelDownload::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}