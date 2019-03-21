#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIDefinitionRecord()
{
    class_< FAIDefinitionRecord, bases< FTimeStampedRecord >  >("FAIDefinitionRecord", no_init)
        .def_readwrite("TheObj", &FAIDefinitionRecord::TheObj)
        .def_readwrite("InUse", &FAIDefinitionRecord::InUse)
  ;
}