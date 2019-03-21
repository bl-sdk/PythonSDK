#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAudioMaster()
{
    class_< UInterpTrackInstAudioMaster, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstAudioMaster", no_init)
        .def("StaticClass", &UInterpTrackInstAudioMaster::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}