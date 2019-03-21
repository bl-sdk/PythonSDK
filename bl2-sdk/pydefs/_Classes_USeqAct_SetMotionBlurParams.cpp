#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetMotionBlurParams()
{
    class_< USeqAct_SetMotionBlurParams, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_SetMotionBlurParams", no_init)
        .def_readwrite("MotionBlurAmount", &USeqAct_SetMotionBlurParams::MotionBlurAmount)
        .def_readwrite("InterpolateSeconds", &USeqAct_SetMotionBlurParams::InterpolateSeconds)
        .def_readwrite("InterpolateElapsed", &USeqAct_SetMotionBlurParams::InterpolateElapsed)
        .def_readwrite("OldMotionBlurAmount", &USeqAct_SetMotionBlurParams::OldMotionBlurAmount)
        .def("StaticClass", &USeqAct_SetMotionBlurParams::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}