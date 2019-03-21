#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeScaleRateBySpeed()
{
    class_< UAnimNodeScaleRateBySpeed, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeScaleRateBySpeed", no_init)
        .def_readwrite("BaseSpeed", &UAnimNodeScaleRateBySpeed::BaseSpeed)
        .def_readwrite("ScaleByValue", &UAnimNodeScalePlayRate::ScaleByValue)
        .def("StaticClass", &UAnimNodeScaleRateBySpeed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}