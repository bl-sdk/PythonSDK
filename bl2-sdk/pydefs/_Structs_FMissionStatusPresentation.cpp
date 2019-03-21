#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionStatusPresentation()
{
    class_< FMissionStatusPresentation >("FMissionStatusPresentation", no_init)
        .def_readwrite("TextColor", &FMissionStatusPresentation::TextColor)
        .def_readwrite("IconFrame", &FMissionStatusPresentation::IconFrame)
  ;
}