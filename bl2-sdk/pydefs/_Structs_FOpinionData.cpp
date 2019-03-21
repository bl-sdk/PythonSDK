#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOpinionData()
{
    class_< FOpinionData >("FOpinionData", no_init)
        .def_readwrite("Opinion", &FOpinionData::Opinion)
        .def_readwrite("Allegiance", &FOpinionData::Allegiance)
  ;
}