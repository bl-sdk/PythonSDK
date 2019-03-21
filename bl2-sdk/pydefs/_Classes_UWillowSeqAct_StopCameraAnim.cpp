#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_StopCameraAnim()
{
    class_< UWillowSeqAct_StopCameraAnim, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_StopCameraAnim", no_init)
        .def("StaticClass", &UWillowSeqAct_StopCameraAnim::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}