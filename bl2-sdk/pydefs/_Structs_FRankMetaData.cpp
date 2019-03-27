#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRankMetaData(py::module &m)
{
    py::class_< FRankMetaData >(m, "FRankMetaData")
        .def_readwrite("RankName", &FRankMetaData::RankName)
        .def_readwrite("RankColumnName", &FRankMetaData::RankColumnName)
  ;
}