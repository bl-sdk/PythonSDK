#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTargetInfoRecord()
{
    class_< FTargetInfoRecord, bases< FTimeStampedRecord >  >("FTargetInfoRecord", no_init)
        .def_readwrite("TheObj", &FTargetInfoRecord::TheObj)
        .def_readwrite("InUse", &FTargetInfoRecord::InUse)
  ;
}