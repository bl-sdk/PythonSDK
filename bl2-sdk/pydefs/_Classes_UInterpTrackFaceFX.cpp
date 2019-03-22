#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFaceFX(py::module &m)
{
    py::class_< UInterpTrackFaceFX,  UInterpTrack   >(m, "UInterpTrackFaceFX")
        .def_readwrite("FaceFXAnimSets", &UInterpTrackFaceFX::FaceFXAnimSets)
        .def_readwrite("FaceFXSeqs", &UInterpTrackFaceFX::FaceFXSeqs)
        .def_readwrite("CachedActorFXAsset", &UInterpTrackFaceFX::CachedActorFXAsset)
        .def_readwrite("FaceFXSoundCueKeys", &UInterpTrackFaceFX::FaceFXSoundCueKeys)
        .def("StaticClass", &UInterpTrackFaceFX::StaticClass, py::return_value_policy::reference)
          ;
}