#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIResourceData()
{
    class_< FAIResourceData >("FAIResourceData", no_init)
        .def_readwrite("Resource", &FAIResourceData::Resource)
        .def_readwrite("CanRun", &FAIResourceData::CanRun)
        .def_readwrite("Running", &FAIResourceData::Running)
  ;
}