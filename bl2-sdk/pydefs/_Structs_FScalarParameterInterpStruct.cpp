#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScalarParameterInterpStruct()
{
    class_< FScalarParameterInterpStruct >("FScalarParameterInterpStruct", no_init)
        .def_readwrite("ParameterName", &FScalarParameterInterpStruct::ParameterName)
        .def_readwrite("ParameterValue", &FScalarParameterInterpStruct::ParameterValue)
        .def_readwrite("InterpTime", &FScalarParameterInterpStruct::InterpTime)
        .def_readwrite("WarmupTime", &FScalarParameterInterpStruct::WarmupTime)
  ;
}