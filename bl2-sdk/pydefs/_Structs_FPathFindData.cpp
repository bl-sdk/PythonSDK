#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPathFindData()
{
    class_< FPathFindData >("FPathFindData", no_init)
        .def_readwrite("Path", &FPathFindData::Path)
        .def_readwrite("FinalDest", &FPathFindData::FinalDest)
        .def_readwrite("MaxRangeToDest", &FPathFindData::MaxRangeToDest)
        .def_readwrite("AnchorPoly", &FPathFindData::AnchorPoly)
  ;
}