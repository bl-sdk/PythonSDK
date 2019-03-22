#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPointExposureData(py::module &m)
{
    py::class_< FPointExposureData >(m, "FPointExposureData")
        .def_readwrite("Looker", &FPointExposureData::Looker)
        .def_readwrite("Point", &FPointExposureData::Point)
        .def_readwrite("Point2", &FPointExposureData::Point2)
        .def_readwrite("Exposure", &FPointExposureData::Exposure)
        .def_readwrite("LastCheckTime", &FPointExposureData::LastCheckTime)
        .def_readwrite("LastUpdateTime", &FPointExposureData::LastUpdateTime)
  ;
}