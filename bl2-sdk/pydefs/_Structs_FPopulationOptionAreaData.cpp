#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationOptionAreaData()
{
    class_< FPopulationOptionAreaData >("FPopulationOptionAreaData", no_init)
        .def_readwrite("ExpressionDef", &FPopulationOptionAreaData::ExpressionDef)
        .def_readwrite("PopulationDefinitions", &FPopulationOptionAreaData::PopulationDefinitions)
  ;
}