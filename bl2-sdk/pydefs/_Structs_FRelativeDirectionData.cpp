#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRelativeDirectionData()
{
    class_< FRelativeDirectionData >("FRelativeDirectionData", no_init)
        .def_readwrite("Direction", &FRelativeDirectionData::Direction)
        .def_readwrite("ConeAroundDirection", &FRelativeDirectionData::ConeAroundDirection)
        .def_readwrite("AdditionalRotation", &FRelativeDirectionData::AdditionalRotation)
  ;
}