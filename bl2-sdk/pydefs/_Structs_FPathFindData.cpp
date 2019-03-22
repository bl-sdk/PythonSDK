#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPathFindData(py::module &m)
{
    py::class_< FPathFindData >(m, "FPathFindData")
        .def_readwrite("Path", &FPathFindData::Path)
        .def_readwrite("FinalDest", &FPathFindData::FinalDest)
        .def_readwrite("MaxRangeToDest", &FPathFindData::MaxRangeToDest)
        .def_readwrite("AnchorPoly", &FPathFindData::AnchorPoly)
  ;
}