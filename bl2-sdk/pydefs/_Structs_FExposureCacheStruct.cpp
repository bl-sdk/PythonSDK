#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExposureCacheStruct()
{
    py::class_< FExposureCacheStruct >("FExposureCacheStruct")
        .def_readwrite("FromPawnName", &FExposureCacheStruct::FromPawnName)
        .def_readwrite("ToActorName", &FExposureCacheStruct::ToActorName)
        .def_readwrite("TimeCached", &FExposureCacheStruct::TimeCached)
        .def_readwrite("NextUpdateTime", &FExposureCacheStruct::NextUpdateTime)
        .def_readwrite("Exposure", &FExposureCacheStruct::Exposure)
        .def_readwrite("FromLoc", &FExposureCacheStruct::FromLoc)
        .def_readwrite("ToLoc", &FExposureCacheStruct::ToLoc)
        .def_readwrite("Vantage", &FExposureCacheStruct::Vantage)
  ;
}