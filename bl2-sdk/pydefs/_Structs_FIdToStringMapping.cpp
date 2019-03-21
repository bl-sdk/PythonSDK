#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIdToStringMapping()
{
    class_< FIdToStringMapping >("FIdToStringMapping", no_init)
        .def_readwrite("Id", &FIdToStringMapping::Id)
        .def_readwrite("Name", &FIdToStringMapping::Name)
  ;
}