#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRuleRecord()
{
    class_< FRuleRecord, bases< FTimeStampedRecord >  >("FRuleRecord", no_init)
        .def_readwrite("TheObj", &FRuleRecord::TheObj)
        .def_readwrite("InUse", &FRuleRecord::InUse)
  ;
}