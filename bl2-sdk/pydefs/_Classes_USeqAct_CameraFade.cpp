#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_CameraFade()
{
    class_< USeqAct_CameraFade, bases< USequenceAction >  , boost::noncopyable>("USeqAct_CameraFade", no_init)
        .def_readwrite("FadeColor", &USeqAct_CameraFade::FadeColor)
        .def_readwrite("FadeAlpha", &USeqAct_CameraFade::FadeAlpha)
        .def_readwrite("FadeOpacity", &USeqAct_CameraFade::FadeOpacity)
        .def_readwrite("FadeTime", &USeqAct_CameraFade::FadeTime)
        .def_readwrite("FadeTimeRemaining", &USeqAct_CameraFade::FadeTimeRemaining)
        .def_readwrite("CachedPCs", &USeqAct_CameraFade::CachedPCs)
        .def("StaticClass", &USeqAct_CameraFade::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_CameraFade::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}