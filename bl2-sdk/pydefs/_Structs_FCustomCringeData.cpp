#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCustomCringeData()
{
    class_< FCustomCringeData >("FCustomCringeData", no_init)
        .def_readwrite("DamageType", &FCustomCringeData::DamageType)
        .def_readwrite("Cringes", &FCustomCringeData::Cringes)
  ;
}