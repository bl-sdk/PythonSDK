#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FExpansionData()
{
    class_< FExpansionData >("FExpansionData", no_init)
        .def_readwrite("Tag", &FExpansionData::Tag)
        .def_readwrite("Data", &FExpansionData::Data)
  ;
}