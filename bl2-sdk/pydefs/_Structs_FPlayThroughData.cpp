#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayThroughData()
{
    class_< FPlayThroughData >("FPlayThroughData", no_init)
        .def_readwrite("PlayThroughNumber", &FPlayThroughData::PlayThroughNumber)
        .def_readwrite("BalanceDefinitions", &FPlayThroughData::BalanceDefinitions)
  ;
}