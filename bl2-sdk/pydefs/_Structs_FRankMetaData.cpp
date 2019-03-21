#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRankMetaData()
{
    py::class_< FRankMetaData >("FRankMetaData")
        .def_readwrite("RankName", &FRankMetaData::RankName)
        .def_readwrite("RankColumnName", &FRankMetaData::RankColumnName)
  ;
}