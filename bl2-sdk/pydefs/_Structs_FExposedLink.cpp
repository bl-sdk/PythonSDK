#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExposedLink(py::module &m)
{
    py::class_< FExposedLink >(m, "FExposedLink")
        .def_readwrite("TargetActor", &FExposedLink::TargetActor)
        .def_readwrite("ExposedScale", &FExposedLink::ExposedScale)
  ;
}