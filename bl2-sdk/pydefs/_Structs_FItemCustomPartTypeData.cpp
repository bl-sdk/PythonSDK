#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemCustomPartTypeData()
{
    class_< FItemCustomPartTypeData >("FItemCustomPartTypeData", no_init)
        .def_readwrite("WeightedParts", &FItemCustomPartTypeData::WeightedParts)
  ;
}