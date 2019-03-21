#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRuleSetRecord()
{
    class_< FRuleSetRecord, bases< FTimeStampedRecord >  >("FRuleSetRecord", no_init)
        .def_readwrite("TheObj", &FRuleSetRecord::TheObj)
        .def_readwrite("InUse", &FRuleSetRecord::InUse)
  ;
}