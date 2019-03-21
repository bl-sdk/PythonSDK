#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributePriorityData()
{
    class_< FAttributePriorityData >("FAttributePriorityData", no_init)
        .def_readwrite("Attribute", &FAttributePriorityData::Attribute)
        .def_readwrite("PriorityIncrease", &FAttributePriorityData::PriorityIncrease)
  ;
}