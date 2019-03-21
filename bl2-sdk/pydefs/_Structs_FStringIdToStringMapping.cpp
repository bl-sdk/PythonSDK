#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStringIdToStringMapping()
{
    class_< FStringIdToStringMapping >("FStringIdToStringMapping", no_init)
        .def_readwrite("Id", &FStringIdToStringMapping::Id)
        .def_readwrite("Name", &FStringIdToStringMapping::Name)
  ;
}