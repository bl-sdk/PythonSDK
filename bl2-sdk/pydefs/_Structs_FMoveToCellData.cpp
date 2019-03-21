#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMoveToCellData()
{
    class_< FMoveToCellData >("FMoveToCellData", no_init)
        .def_readwrite("IndexInCellsList", &FMoveToCellData::IndexInCellsList)
        .def_readwrite("DistanceFromCurrentCell", &FMoveToCellData::DistanceFromCurrentCell)
        .def_readwrite("CosAngle", &FMoveToCellData::CosAngle)
  ;
}