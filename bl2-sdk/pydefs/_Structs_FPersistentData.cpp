#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPersistentData()
{
    class_< FPersistentData >("FPersistentData", no_init)
        .def_readwrite("VfTable", &FPersistentData::VfTable)
  ;
}