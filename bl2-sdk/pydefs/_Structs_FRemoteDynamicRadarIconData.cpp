#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRemoteDynamicRadarIconData(py::module &m)
{
    py::class_< FRemoteDynamicRadarIconData >(m, "FRemoteDynamicRadarIconData")
        .def_readwrite("IconType", &FRemoteDynamicRadarIconData::IconType)
        .def_readwrite("Location", &FRemoteDynamicRadarIconData::Location)
  ;
}