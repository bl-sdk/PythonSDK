#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPointExposureData()
{
    class_< FPointExposureData >("FPointExposureData", no_init)
        .def_readwrite("Looker", &FPointExposureData::Looker)
        .def_readwrite("Point", &FPointExposureData::Point)
        .def_readwrite("Point2", &FPointExposureData::Point2)
        .def_readwrite("Exposure", &FPointExposureData::Exposure)
        .def_readwrite("LastCheckTime", &FPointExposureData::LastCheckTime)
        .def_readwrite("LastUpdateTime", &FPointExposureData::LastUpdateTime)
  ;
}