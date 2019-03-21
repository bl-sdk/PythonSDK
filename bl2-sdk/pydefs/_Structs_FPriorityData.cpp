#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPriorityData()
{
    class_< FPriorityData >("FPriorityData", no_init)
        .def_readwrite("Description", &FPriorityData::Description)
        .def_readwrite("Condition", &FPriorityData::Condition)
  ;
}