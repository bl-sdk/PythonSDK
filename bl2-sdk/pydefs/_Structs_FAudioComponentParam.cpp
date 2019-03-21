#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAudioComponentParam()
{
    class_< FAudioComponentParam >("FAudioComponentParam", no_init)
        .def_readwrite("ParamName", &FAudioComponentParam::ParamName)
        .def_readwrite("FloatParam", &FAudioComponentParam::FloatParam)
        .def_readwrite("WaveParam", &FAudioComponentParam::WaveParam)
  ;
}