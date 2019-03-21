#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoordinatedScalarParameter()
{
    class_< FCoordinatedScalarParameter >("FCoordinatedScalarParameter", no_init)
        .def_readwrite("ParamName", &FCoordinatedScalarParameter::ParamName)
        .def_readwrite("ParamValueOverTime", &FCoordinatedScalarParameter::ParamValueOverTime)
        .def_readwrite("BoundsScale", &FCoordinatedScalarParameter::BoundsScale)
  ;
}