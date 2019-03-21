#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStatColorMapping()
{
    class_< FStatColorMapping >("FStatColorMapping", no_init)
        .def_readwrite("StatName", &FStatColorMapping::StatName)
        .def_readwrite("ColorMap", &FStatColorMapping::ColorMap)
  ;
}