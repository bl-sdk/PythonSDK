#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCodecMovieBink()
{
    py::class_< UCodecMovieBink,  UCodecMovie   >("UCodecMovieBink")
        .def_readonly("UnknownData00", &UCodecMovieBink::UnknownData00)
        .def("StaticClass", &UCodecMovieBink::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}