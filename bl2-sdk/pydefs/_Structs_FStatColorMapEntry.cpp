#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStatColorMapEntry()
{
    class_< FStatColorMapEntry >("FStatColorMapEntry", no_init)
        .def_readwrite("In", &FStatColorMapEntry::In)
        .def_readwrite("Out", &FStatColorMapEntry::Out)
  ;
}