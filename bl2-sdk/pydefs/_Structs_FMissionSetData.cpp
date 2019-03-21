#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionSetData()
{
    class_< FMissionSetData >("FMissionSetData", no_init)
        .def_readwrite("PackageName", &FMissionSetData::PackageName)
        .def_readwrite("Missions", &FMissionSetData::Missions)
  ;
}