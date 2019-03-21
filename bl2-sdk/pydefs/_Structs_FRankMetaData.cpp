#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRankMetaData()
{
    class_< FRankMetaData >("FRankMetaData", no_init)
        .def_readwrite("RankName", &FRankMetaData::RankName)
        .def_readwrite("RankColumnName", &FRankMetaData::RankColumnName)
  ;
}