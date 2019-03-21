#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCodecMovieBink(py::object m)
{
    py::class_< UCodecMovieBink,  UCodecMovie   >(m, "UCodecMovieBink")
        .def_readonly("UnknownData00", &UCodecMovieBink::UnknownData00)
        .def("StaticClass", &UCodecMovieBink::StaticClass, py::return_value_policy::reference)
          ;
}