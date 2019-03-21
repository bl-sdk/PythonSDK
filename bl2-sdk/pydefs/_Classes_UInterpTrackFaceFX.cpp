#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackFaceFX()
{
    class_< UInterpTrackFaceFX, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackFaceFX", no_init)
        .def_readwrite("FaceFXAnimSets", &UInterpTrackFaceFX::FaceFXAnimSets)
        .def_readwrite("FaceFXSeqs", &UInterpTrackFaceFX::FaceFXSeqs)
        .def_readwrite("CachedActorFXAsset", &UInterpTrackFaceFX::CachedActorFXAsset)
        .def_readwrite("FaceFXSoundCueKeys", &UInterpTrackFaceFX::FaceFXSoundCueKeys)
        .def("StaticClass", &UInterpTrackFaceFX::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}