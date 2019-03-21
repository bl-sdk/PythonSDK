#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCodecMovieBink(py::object m)
{
    py::class_< UCodecMovieBink,  UCodecMovie   >(m, "UCodecMovieBink")
        .def("StaticClass", &UCodecMovieBink::StaticClass, py::return_value_policy::reference)
          ;
}