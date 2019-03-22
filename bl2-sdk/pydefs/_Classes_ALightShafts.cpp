#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALightShafts(py::module &m)
{
    py::class_< ALightShafts,  ALight   >(m, "ALightShafts")
        .def("StaticClass", &ALightShafts::StaticClass, py::return_value_policy::reference)
          ;
}