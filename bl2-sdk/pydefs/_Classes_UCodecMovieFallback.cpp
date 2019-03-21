#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCodecMovieFallback()
{
    py::class_< UCodecMovieFallback,  UCodecMovie   >("UCodecMovieFallback")
        .def_readwrite("CurrentTime", &UCodecMovieFallback::CurrentTime)
        .def("StaticClass", &UCodecMovieFallback::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}