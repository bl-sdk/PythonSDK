#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxGameInfo(py::module &m)
{
    py::class_< AGearboxGameInfo,  AGameInfo   >(m, "AGearboxGameInfo")
		.def_static("StaticClass", &AGearboxGameInfo::StaticClass, py::return_value_policy::reference)
        .def("eventPostLogin", &AGearboxGameInfo::eventPostLogin)
          ;
}