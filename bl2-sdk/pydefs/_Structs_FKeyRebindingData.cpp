#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKeyRebindingData()
{
    class_< FKeyRebindingData >("FKeyRebindingData", no_init)
        .def_readwrite("DefaultKeyName", &FKeyRebindingData::DefaultKeyName)
        .def_readwrite("RemappedKeyName", &FKeyRebindingData::RemappedKeyName)
  ;
}