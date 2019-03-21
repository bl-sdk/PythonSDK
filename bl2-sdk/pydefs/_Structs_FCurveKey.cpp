#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCurveKey()
{
    class_< FCurveKey >("FCurveKey", no_init)
        .def_readwrite("CurveName", &FCurveKey::CurveName)
        .def_readwrite("Weight", &FCurveKey::Weight)
  ;
}