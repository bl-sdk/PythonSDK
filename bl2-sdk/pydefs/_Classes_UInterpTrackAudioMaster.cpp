#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackAudioMaster()
{
    class_< UInterpTrackAudioMaster, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackAudioMaster", no_init)
        .def_readwrite("VectorTrack", &UInterpTrackVectorBase::VectorTrack)
        .def_readwrite("CurveTension", &UInterpTrackVectorBase::CurveTension)
        .def("StaticClass", &UInterpTrackAudioMaster::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}