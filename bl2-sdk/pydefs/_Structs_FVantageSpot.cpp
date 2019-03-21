#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVantageSpot()
{
    class_< FVantageSpot >("FVantageSpot", no_init)
        .def_readwrite("Location", &FVantageSpot::Location)
        .def_readwrite("VantageType", &FVantageSpot::VantageType)
  ;
}