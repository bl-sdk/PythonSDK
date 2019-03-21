#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_ViewShake()
{
    class_< UAnimNotify_ViewShake, bases< UAnimNotify_Scripted >  , boost::noncopyable>("UAnimNotify_ViewShake", no_init)
        .def_readwrite("Duration", &UAnimNotify_ViewShake::Duration)
        .def_readwrite("RotAmplitude", &UAnimNotify_ViewShake::RotAmplitude)
        .def_readwrite("RotFrequency", &UAnimNotify_ViewShake::RotFrequency)
        .def_readwrite("LocAmplitude", &UAnimNotify_ViewShake::LocAmplitude)
        .def_readwrite("LocFrequency", &UAnimNotify_ViewShake::LocFrequency)
        .def_readwrite("FOVAmplitude", &UAnimNotify_ViewShake::FOVAmplitude)
        .def_readwrite("FOVFrequency", &UAnimNotify_ViewShake::FOVFrequency)
        .def_readwrite("ShakeRadius", &UAnimNotify_ViewShake::ShakeRadius)
        .def_readwrite("BoneName", &UAnimNotify_ViewShake::BoneName)
        .def_readwrite("ShakeParams", &UAnimNotify_ViewShake::ShakeParams)
        .def("StaticClass", &UAnimNotify_ViewShake::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventNotify", &UAnimNotify_ViewShake::eventNotify)
        .staticmethod("StaticClass")
  ;
}