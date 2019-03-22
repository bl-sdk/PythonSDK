#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_Speaker(py::module &m)
{
    py::class_< UInterface_Speaker,  UInterface   >(m, "UInterface_Speaker")
        .def("StaticClass", &UInterface_Speaker::StaticClass, py::return_value_policy::reference)
        .def("eventSpeak", &UInterface_Speaker::eventSpeak)
          ;
}