#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_StreamInTextures()
{
    class_< USeqAct_StreamInTextures, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_StreamInTextures", no_init)
        .def_readwrite("Seconds", &USeqAct_StreamInTextures::Seconds)
        .def_readwrite("StreamingDistanceMultiplier", &USeqAct_StreamInTextures::StreamingDistanceMultiplier)
        .def_readwrite("NumWantingResourcesID", &USeqAct_StreamInTextures::NumWantingResourcesID)
        .def_readwrite("StopTimestamp", &USeqAct_StreamInTextures::StopTimestamp)
        .def_readwrite("LocationActors", &USeqAct_StreamInTextures::LocationActors)
        .def_readwrite("ForceMaterials", &USeqAct_StreamInTextures::ForceMaterials)
        .def_readwrite("CinematicTextureGroups", &USeqAct_StreamInTextures::CinematicTextureGroups)
        .def_readwrite("SelectedCinematicTextureGroups", &USeqAct_StreamInTextures::SelectedCinematicTextureGroups)
        .def("StaticClass", &USeqAct_StreamInTextures::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_StreamInTextures::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}