#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLookAxisDefinitionData()
{
    class_< FLookAxisDefinitionData >("FLookAxisDefinitionData", no_init)
        .def_readwrite("Horizontal", &FLookAxisDefinitionData::Horizontal)
        .def_readwrite("Vertical", &FLookAxisDefinitionData::Vertical)
  ;
}