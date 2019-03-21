#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRemoteDynamicRadarIconData()
{
    py::class_< FRemoteDynamicRadarIconData >("FRemoteDynamicRadarIconData")
        .def_readwrite("IconType", &FRemoteDynamicRadarIconData::IconType)
        .def_readwrite("Location", &FRemoteDynamicRadarIconData::Location)
  ;
}