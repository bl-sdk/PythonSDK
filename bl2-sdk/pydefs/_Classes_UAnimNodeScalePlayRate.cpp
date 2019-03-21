#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeScalePlayRate()
{
    class_< UAnimNodeScalePlayRate, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeScalePlayRate", no_init)
        .def_readwrite("ScaleByValue", &UAnimNodeScalePlayRate::ScaleByValue)
        .def("StaticClass", &UAnimNodeScalePlayRate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}