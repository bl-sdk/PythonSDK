#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTestMapsListDatum()
{
    class_< FTestMapsListDatum >("FTestMapsListDatum", no_init)
        .def_readwrite("MapDisplayName", &FTestMapsListDatum::MapDisplayName)
        .def_readwrite("MapName", &FTestMapsListDatum::MapName)
  ;
}