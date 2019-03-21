#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_SoundSpatial()
{
    class_< UAnimNotify_SoundSpatial, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_SoundSpatial", no_init)
        .def_readwrite("SoundCueFirstPerson", &UAnimNotify_SoundSpatial::SoundCueFirstPerson)
        .def_readwrite("SoundCueThirdPerson", &UAnimNotify_SoundSpatial::SoundCueThirdPerson)
        .def_readwrite("BoneName", &UAnimNotify_SoundSpatial::BoneName)
        .def("StaticClass", &UAnimNotify_SoundSpatial::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}