#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimeStampedRecord()
{
    class_< FTimeStampedRecord >("FTimeStampedRecord", no_init)
        .def_readwrite("DeathTimeStamp", &FTimeStampedRecord::DeathTimeStamp)
  ;
}