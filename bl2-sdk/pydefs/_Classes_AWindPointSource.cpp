#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWindPointSource(py::module &m)
{
    py::class_< AWindPointSource,  AInfo   >(m, "AWindPointSource")
		.def_static("StaticClass", &AWindPointSource::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Component", &AWindPointSource::Component)
          ;
}