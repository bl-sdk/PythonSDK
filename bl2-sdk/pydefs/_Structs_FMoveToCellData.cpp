#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMoveToCellData()
{
    py::class_< FMoveToCellData >("FMoveToCellData")
        .def_readwrite("IndexInCellsList", &FMoveToCellData::IndexInCellsList)
        .def_readwrite("DistanceFromCurrentCell", &FMoveToCellData::DistanceFromCurrentCell)
        .def_readwrite("CosAngle", &FMoveToCellData::CosAngle)
  ;
}