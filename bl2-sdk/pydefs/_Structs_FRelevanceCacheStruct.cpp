#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRelevanceCacheStruct()
{
    py::class_< FRelevanceCacheStruct >("FRelevanceCacheStruct")
        .def_readwrite("RealViewerName", &FRelevanceCacheStruct::RealViewerName)
        .def_readwrite("ToPawnName", &FRelevanceCacheStruct::ToPawnName)
        .def_readwrite("TimeCached", &FRelevanceCacheStruct::TimeCached)
        .def_readwrite("NextUpdateTime", &FRelevanceCacheStruct::NextUpdateTime)
        .def_readwrite("FromLoc", &FRelevanceCacheStruct::FromLoc)
        .def_readwrite("ToLoc", &FRelevanceCacheStruct::ToLoc)
        .def_readwrite("RotatingIndex", &FRelevanceCacheStruct::RotatingIndex)
  ;
}