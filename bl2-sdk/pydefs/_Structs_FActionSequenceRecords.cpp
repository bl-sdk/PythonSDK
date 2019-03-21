#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActionSequenceRecord()
{
    class_< FActionSequenceRecord, bases< FTimeStampedRecord >  >("FActionSequenceRecord", no_init)
        .def_readwrite("TheObj", &FActionSequenceRecord::TheObj)
        .def_readwrite("InUse", &FActionSequenceRecord::InUse)
  ;
}