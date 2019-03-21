#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AReverbVolumeToggleable()
{
    class_< AReverbVolumeToggleable, bases< AReverbVolume >  , boost::noncopyable>("AReverbVolumeToggleable", no_init)
        .def("StaticClass", &AReverbVolumeToggleable::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &AReverbVolumeToggleable::OnToggle)
        .staticmethod("StaticClass")
  ;
}