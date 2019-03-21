#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageLocationData()
{
    class_< FDamageLocationData >("FDamageLocationData", no_init)
        .def_readwrite("Time", &FDamageLocationData::Time)
        .def_readwrite("Location", &FDamageLocationData::Location)
  ;
}