#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_Rumble()
{
    class_< UAnimNotify_Rumble, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_Rumble", no_init)
        .def_readwrite("PredefinedWaveForm", &UAnimNotify_Rumble::PredefinedWaveForm)
        .def_readwrite("WaveForm", &UAnimNotify_Rumble::WaveForm)
        .def_readwrite("EffectRadius", &UAnimNotify_Rumble::EffectRadius)
        .def("StaticClass", &UAnimNotify_Rumble::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}