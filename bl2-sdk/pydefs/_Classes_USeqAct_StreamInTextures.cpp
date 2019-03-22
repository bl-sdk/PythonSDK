#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_StreamInTextures(py::module &m)
{
    py::class_< USeqAct_StreamInTextures,  USeqAct_Latent   >(m, "USeqAct_StreamInTextures")
        .def_readwrite("Seconds", &USeqAct_StreamInTextures::Seconds)
        .def_readwrite("StreamingDistanceMultiplier", &USeqAct_StreamInTextures::StreamingDistanceMultiplier)
        .def_readwrite("NumWantingResourcesID", &USeqAct_StreamInTextures::NumWantingResourcesID)
        .def_readwrite("StopTimestamp", &USeqAct_StreamInTextures::StopTimestamp)
        .def_readwrite("LocationActors", &USeqAct_StreamInTextures::LocationActors)
        .def_readwrite("ForceMaterials", &USeqAct_StreamInTextures::ForceMaterials)
        .def_readwrite("CinematicTextureGroups", &USeqAct_StreamInTextures::CinematicTextureGroups)
        .def_readwrite("SelectedCinematicTextureGroups", &USeqAct_StreamInTextures::SelectedCinematicTextureGroups)
        .def("StaticClass", &USeqAct_StreamInTextures::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_StreamInTextures::eventGetObjClassVersion)
          ;
}